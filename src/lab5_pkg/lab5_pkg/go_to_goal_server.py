# Relevant msgs
from geometry_msgs.msg import Twist, PoseWithCovarianceStamped
from nav_msgs.msg import OccupancyGrid
from std_msgs.msg import String

# For actions
from rclpy.action import ActionServer, GoalResponse
from rclpy.action.server import ServerGoalHandle
from custom_interfaces.action import RobotGoal

# For multithreading
from rclpy.executors import MultiThreadedExecutor
from rclpy.executors import ExternalShutdownException
from rclpy.callback_groups import ReentrantCallbackGroup

import rclpy
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data

import math

class GoToGoalNode(Node):
    def __init__(self):
        super().__init__('go_to_goal')

        # pi
        self.PI = 3.14159265358979323846

        # False until scan sees something
        self.obstacle = False

        # Set by pose from pose topic
        self.x = 0
        self.y = 0
        self.ang = 0

        # Robot radius
        self.robot_radius = 0.3

        # Meta data from occupancy grid
        self.resoltuion = 0.05 # Default 5cm
        self.width = 0
        self.height = 0
        self.origin_x = 0.0
        self.origin_y = 0.0
        self.origin_ang = 0.0

        # Tracking error data
        self.last_err_pos = 0.0
        self.total_err_pos = 0.0
        self.last_err_ang = 0.0
        self.total_err_ang = 0.0

        # Subscribe to the robot position
        self.pos_subscriber = self.create_subscription(PoseWithCovarianceStamped, '/robot1/pose', self.callback_pos, 10)
        self.pos_subscriber

        # Subscribe to the occupancy grid
        self.map_subscriber = self.create_subscription(OccupancyGrid, '/robot1/map', self.callback_map, 10)
        self.map_subscriber

        # Publisher for velocity
        self.velocity_pub = self.create_publisher(Twist, '/robot1/cmd_vel_unfiltered', 10)

        self.goal_action = ActionServer(self, RobotGoal, "go_to_goal", goal_callback=self.goal_callback, execute_callback=self.execute_callback)

    def goal_callback(self, goal_request):
        self.get_logger().info("Recieved Goal Request")

        if goal_request.goal_x > self.max_x or goal_request.goal_y > self.max_y:
            self.get_logger().info("Rejected Request, OOB")
            return GoalResponse.REJECT
        for point in self.obstacle_space:
            dist = math.sqrt((goal_request.goal_y - point[1]) ** 2 + (goal_request.goal_x - point[0])** 2)
            if dist < 2 * self.robot_radius:
                self.get_logger().info("Rejected")
                return GoalResponse.REJECT

        self.get_logger().info("Accepted Request!")
        return GoalResponse.ACCEPT
    
    def execute_callback(self, goal_handle):
        goal_x = goal_handle.request.goal_x
        goal_y = goal_handle.request.goal_y
        goal_theta = goal_handle.request.goal_theta
        result = RobotGoal.Result()
        feedback = RobotGoal.Feedback()

        kp_l = 0.4
        kd_l = 0.1
        ki_l = 0.05
        kp_a = 0.8
        kd_a = 0.2
        ki_a = 0.05
        close_enough = 0.2

        # while not at the goal...
        while not((self.x >= goal_x - close_enough or self.x <= goal_x + close_enough) and (self.y >= goal_y - close_enough or self.y <= goal_y + close_enough)):
            err_pos = math.sqrt((goal_x - self.x) ** 2 + (goal_y - self.y) ** 2)
            d_err_pos = err_pos - self.last_err_pos
            self.total_err_pos += err_pos
            err_ang = math.atan((goal_y - self.y)/(goal_x - self.x)) - self.ang
            d_err_ang = err_ang - self.last_err_ang
            self.total_err_ang += err_ang
        
            vel_linear = kp_l*err_pos + kd_l*d_err_pos + ki_l * self.total_err_pos
            self.last_err_pos = err_pos
            vel_angular = kp_a*err_pos + kd_a*d_err_ang + ki_a * self.total_err_ang
            self.last_err_ang = err_ang

            result_twist = Twist()
            result_twist.linear.x = vel_linear
            result_twist.angular.z = vel_angular
            self.velocity_pub.publish(result_twist)
            self.get_logger().info("I'm rotating!")

            feedback.curr_x = self.x
            feedback.curr_y = self.y
            feedback.curr_theta = self.theta
            feedback.distance_from_goal = err_pos
            goal_handle.publish_feedback(feedback)

        result.success = True
        goal_handle.succeed()
        return result

    # FUNCTION: Callback for position
    def callback_pos(self, msg):
        self.x = msg.pose.pose.position.x
        self.y = msg.pose.pose.position.y
        quaternion = msg.pose.pose.orientation

        (_,_,self.ang) = euler_from_quaternion([quaternion.x, quaternion.y, quaternion.z, quaternion.w])

    # FUNCTION: index in map to real x y
    def index_to_real(self,col,row):
        real_x = round((col*self.resolution) + self.origin_x,2)
        real_y = round((row*self.resoltuion) + self.origin_y,2)
        return real_x,real_y

    # FUNCTION: get occupancy grid and find free, unknown, obstacle space
    def callback_map(self,msg):
        self.resolution = round(msg.info.resolution,3)
        # The origin of the map [m, m, rad].  This is the real-world pose of the cell (0,0) in the map
        self.origin_x = msg.info.origin.position.x
        self.origin_y = msg.info.origin.position.y
        self.origin_ang = msg.info.origin.orientation.z

        # How many columns (width) and rows (height)
        self.width = msg.info.width
        self.height = msg.info.height

        # Get our max x and max y
        self.max_x, self.max_y = self.index_to_real(self.width, self.height)

        # Occupancy grid data in one big list
        occupancy_grid = msg.data

        # Empty lists to add obstacles to
        self.obstacle_space = []

        row = 0
        while row < self.height:
            col = 0
            while col < self.width:
                real_x,real_y = self.index_to_real(col,row)
                point = occupancy_grid[col + (row*self.width)]

                if (point > 25):
                    self.obstacle_space.append((real_x, real_y))

                col += 1
            row += 1

def main(args=None):
    try:
        rclpy.init(args=None)
        node = GoToGoalNode()

        # Use a MultiThreadedExecutor to enable processing goals concurrently
        executor = MultiThreadedExecutor()

        rclpy.spin(node, executor=executor)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
from rclpy.action import ActionClient
from rclpy.action.client import ClientGoalHandle, GoalStatus

from custom_interfaces.action import RobotGoal

import rclpy
from rclpy.node import Node

class GoToGoalClient(Node):
    def __init__(self):
        super().__init__('go_to_goal_client')
        self.goal_client = ActionClient(self, RobotGoal, "go_to_goal")
        while not self.goal_client.wait_for_server(1.0):
            self.get_logger().warn("Waiting for server...")

    def send_goal(self, userInput):
        # unpackage request to a variable called goal using <ActionInterface>.Goal()
        # Set goal to be the user input
        goal = RobotGoal.Goal()
        goal.goal_x = float(userInput[0])
        goal.goal_y = float(userInput[1])
        goal.goal_theta = float(userInput[2])
        self.goal_client.send_goal_async(goal, feedback_callback=self.goal_feedback_callback).add_done_callback(self.goal_response_callback)

    # Process Goal Accept/Reject
    def goal_response_callback(self, future):
        goal_handle = future.result()
        if goal_handle.accepted:
            self.get_logger().info("Goal got accepted")
            goal_handle.get_result_async().add_done_callback(
            self.goal_result_callback)
        else:
            self.get_logger().info("Goal got rejected: ripperoni")

    # Process Goal Feedback
    def goal_feedback_callback(self, feedback_msg):
        curr_x = feedback_msg.feedback.current_x
        curr_y = feedback_msg.feedback.current_y
        curr_t = feedback_msg.feedback.current_theta
        dist = feedback_msg.feedback.distance_from_goal
        self.get_logger().info("Got feedback: " + str(f"Location: ({curr_x}, {curr_y})\nAngle: {curr_t}\n Dist. to goal: {dist}", ))

    def goal_result_callback(self, future):
        result = future.result().result
        status = future.result().status
        if status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info("Success!")
            # Process result data here and log it
        else:
            self.get_logger().info("Action aborted or cancelled")

        rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)

    # Change to be your node class name
    node = GoToGoalClient()

    goal_x = input("Enter a goal coordinate:\nx > ")
    goal_y = input("y > ")
    goal_theta = input("angle > ")
    node.send_goal((goal_x, goal_y, goal_theta))

    rclpy.spin(node)
#     node.destroy_node()
#     rclpy.shutdown()

if __name__ == '__main__':
    main()
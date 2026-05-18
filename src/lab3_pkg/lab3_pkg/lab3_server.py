import rclpy
from geometry_msgs.msg import Twist
from irobot_create_msgs.msg import LightringLeds, AudioNote
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import LaserScan
from sensor_msgs.msg import BatteryState
from custom_interfaces.srv import SetCap
import time

# Any additional imports here

# Decide your node class name
class Lab3Server(Node):
    def __init__(self):

        # Change to have your node name
        super().__init__('SCOD_server')

        self.velocity_cap = 0.4
        self.obstacle_detected = False
        self.obstacle_distance = 0.001

        self.velocity_subscriber = self.create_subscription(Twist, '/robot1/cmd_vel_unfiltered', self.vel_callback, 10)
        self.scan_subscriber = self.create_subscription(LaserScan, 'robot1/scan', self.scan_callback, 10)
        self.battery_subscriber = self.create_subscription(BatteryState, 'robot1/battery_state', self.battery_callback, 10)
        
        self.velocity_publish = self.create_publisher(Twist, '/robot1/cmd_vel_unstamped', 10)
        self.led_publisher = self.create_publisher(LightringLeds, '/robot1/cmd_lightring', qos_profile_sensor_data)

        self.set_speed_cap = self.create_service(SetCap, "funny", self.set_cap_callback)

    def battery_callback(self, msg):
        self.charge_level = msg.percentage * 100

    def scan_callback(self, msg):
        min_range_val = msg.range_min
        max_range_val = msg.range_max
        self.obstacle_detected = False
        for point in msg.ranges[200:340]:
            
            if point < min_range_val or point > max_range_val:
                continue

            if point < self.obstacle_distance:
                self.obstacle_detected = True 
                # self.get_logger().info(str(point))
                self.led_publisher.publish(self.set_lightring_colors(128, 128, 0))

    def set_cap_callback(self, request, response):
        new_cap = request.new_cap
        success = response.success
        confirmation = response.confirmation

        if (new_cap < 0.65):
            confirmation = "New Cap: " + str(new_cap) + "\nOld Cap: " + str(self.velocity_cap) + "\nBattery %: " + str(self.charge_level) + "\n"
            self.velocity_cap = new_cap
            success = True
        else:
            confirmation = "Speed Cap too high! Pick a value that is less than 0.65 m/s or lower.\nBattery %: " + str(self.charge_level) + "\n"

        response.confirmation = confirmation
        response.success = success
        return response

        
    def vel_callback(self, msg):
        robot_vel_fwd = msg.linear.x
        robot_vel_ang = msg.angular.z
        # self.get_logger().info(str(robot_vel_fwd))

        if (self.obstacle_detected == True):
            robot_vel_fwd = 0.0
        elif (robot_vel_fwd >= self.velocity_cap):    
            light_msg = self.set_lightring_colors(0, 255, 0)
            robot_vel_fwd = self.velocity_cap
            robot_vel_ang = 0.4
            self.led_publisher.publish(light_msg)
        else:
            light_msg = self.set_lightring_colors(0, 0, 255)
            self.led_publisher.publish(light_msg)

        new_vel = Twist()
        new_vel.linear.x = robot_vel_fwd
        new_vel.angular.z = robot_vel_ang
        
        self.velocity_publish.publish(new_vel)

    def set_lightring_colors(self, r, b, g):
        lightring_msg = LightringLeds()
        lightring_msg.header.stamp = self.get_clock().now().to_msg()
        lightring_msg.override_system = True

        for i in range(6):
            lightring_msg.leds[i].red = r
            lightring_msg.leds[i].blue = b
            lightring_msg.leds[i].green = g
        
        return lightring_msg
    

def main(args=None):
    rclpy.init(args=args)

    # Change to be your node class name
    node = Lab3Server()

    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
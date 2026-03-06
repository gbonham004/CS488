import rclpy
from geometry_msgs.msg import Twist
from irobot_create_msgs.msg import LightringLeds, AudioNote
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import LaserScan
from custom_interfaces.srv import SetCap
import time

# Any additional imports here

# Decide your node class name
class Lab3Client(Node):
    def __init__(self):
        super().__init__('set_cap_client_node')

        self.set_speed_cap = self.create_client(SetCap, "funny")
        while not self.set_speed_cap.wait_for_service(1.0):
            self.get_logger().warn("Waiting for set cap service...")

    def request_service(self, new_cap):
        request = SetCap.Request()
        request.new_cap = new_cap
        self.response = self.set_speed_cap.call_async(request)

def main(args=None):
    rclpy.init(args=args)
    node = Lab3Client()

    new_cap = input("Enter your new speed cap here\n> ")
    node.request_service(float(new_cap))
    rclpy.spin_until_future_complete(node, node.response)

    response = node.response.result()
    node.get_logger().info("The response is: " + str(response.confirmation))

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
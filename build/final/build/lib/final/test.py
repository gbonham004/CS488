import rclpy
from rclpy.node import Node

import cv2
from cv_bridge import CvBridge as cvb
from sensor_msgs.msg import Image

# Any additional imports here

# Decide your node class name
class Test(Node):
    def __init__(self):
        super().__init__('test_node')

        self.cam_sub = self.create_subscription(Image, "robot1/oakd/rgb/preview/image_raw", self.cam_callback, 10)

    def cam_callback(self, msg):
        try:
            cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding="bgr8")
            var = cv2.imshow("camera", cv_image)
        except Exception as e:
            self.get_logger().error(f"Failed to process: {e}")
        self.get_logger().info(var)
        pass

def main(args=None):
    rclpy.init(args=args)

    # Change to be your node class name
    node = Test()

    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
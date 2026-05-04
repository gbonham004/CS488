import rclpy
from rclpy.node import Node

import cv2
from cv_bridge import CvBridge as cvb
from sensor_msgs.msg import Image
from pyzbar.pyzbar import decode 
# Any additional imports here

# Decide your node class name
class ColorVision(Node):
    def __init__(self):
        super().__init__('color_vision')

        self.bridge = cvb()

        self.cam_sub = self.create_subscription(Image, "robot1/oakd/rgb/preview/image_raw", self.cam_callback, 10)

    def cam_callback(self, msg):
        try:
            cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding="bgr8")
            cv2.imshow("camera", cv_image)
            cv2.waitKey(1)

            barcodes = decode(cv_image) 
            self.get_logger().info("hi people")

            if barcodes:
                for barcode in barcodes:
                    (x, y, w, h) = barcode.rect
                    data = barcode.data.decode("utf-8")
                    code_type = barcode.type
                    
                    text = f"{code_type}: {data}"
                    cv2.rectangle(cv_image, (x, y), (x + w, y+ h), (0, 255, 0), 2)
                    cv2.putText(cv_image, text, (x, y - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)

                    self.get_logger().info("we have a code!")
                    self.get_logger().info(data)
            

            upper_range_1 = (15, 255, 255)
            lower_range_1 = (0, 100, 100)
            upper_range_2 = (180, 255, 255)
            lower_range_2 = (165, 100, 100)

            hsv_image = cv2.cvtColor(cv_image, cv2.COLOR_BGR2HSV)
            lower_red_mask = cv2.inRange(hsv_image, lower_range_1, upper_range_1)
            upper_red_mask = cv2.inRange(hsv_image, lower_range_2, upper_range_2)
            contours_lower, _ = cv2.findContours(lower_red_mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
            contours_upper, _ = cv2.findContours(upper_red_mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
            flag = False


            area_threshold = 1000
            for cnt in contours_lower:
                area = cv2.contourArea(cnt)
                if area > area_threshold:
                    flag = True

            for cnt in contours_upper:
                area = cv2.contourArea(cnt)
                if area > area_threshold:
                    flag = True

            if flag == True:
                self.get_logger().info("What if it was blood colored...")
        except Exception as e:
            self.get_logger().error(f"Failed to process: {e}")

def main(args=None):
    rclpy.init(args=args)

    # Change to be your node class name
    node = ColorVision()

    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
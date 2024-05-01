import rclpy
import threading

from rclpy.node import Node
from std_msgs.msg import Int16
from ultralytics import YOLO


class Dft_Publisher(Node):
    def __init__(self):
        super().__init__("dft_publisher")
        self.dft_publiser = self.create_publisher(Int16, "dft", 10)
        timer = self.create_timer(1.0, self.dft_callback)

    def dft_callback(self):
        msg = Int16( data=1 )
        self.dft_publiser.publish(msg)
        self.get_logger().info(f"Publishing message {msg.data}")


def detect():

    model = YOLO('yolov8n.pt')  

    source = 'https://ultralytics.com/images/bus.jpg'

    results = model(source, stream=True)  

    for result in results:
        boxes = result.boxes  # Boxes object for bounding box outputs
        masks = result.masks  # Masks object for segmentation masks outputs
        keypoints = result.keypoints  # Keypoints object for pose outputs
        probs = result.probs  # Probs object for classification outputs
        result.save(filename='result.jpg')  # save to disk


def main(args=None):
    rclpy.init(args=args)

    dft_publisher = Dft_Publisher()

    detect()

    rclpy.spin(dft_publisher)

    dft_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
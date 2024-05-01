import rclpy
import threading

from rclpy.node import Node
from std_msgs.msg import Int16
from object_detector.yolov5 import detect



class Dft_Publisher(Node):
    def __init__(self):
        super().__init__("dft_publisher")
        self.dft_publiser = self.create_publisher(Int16, "dft", 10)
        timer = self.create_timer(1.0, self.dft_callback)

    def dft_callback(self):
        msg = Int16( data=1 )
        self.dft_publiser.publish(msg)
        self.get_logger().info(f"Publishing message {msg.data}")


def detector(weights, imgz):
    print("Detector started")
    detect.run(weights=weights, imgsz=imgz)


def main(args=None):
    rclpy.init(args=args)

    dft_publisher = Dft_Publisher()

    detect_thread = threading.Thread(target=detect.run, args=('weights/anomaly_detect.pt', 416))
    detect_thread.start()

    rclpy.spin(dft_publisher)

    dft_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
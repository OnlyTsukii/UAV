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

    source = 'bus.jpg'

    results = model(source, stream=True)  

    for result in results:
        boxes = result.boxes  # Boxes object for bounding box outputs
        print_boxes(boxes.xywh)
       
        result.save(filename='result.jpg')  # save to disk


def print_boxes(xywh):
    x, y, w, h = xywh

    print(x, y, w, h)

    x1 = "{:.5f}".format(x - w / 2)
    y1 = "{:.5f}".format(y - h / 2)

    x2 = "{:.5f}".format(x + w / 2)
    y2 = "{:.5f}".format(y - h / 2)

    x3 = "{:.5f}".format(x - w / 2)
    y3 = "{:.5f}".format(y + h / 2)

    x4 = "{:.5f}".format(x + w / 2)
    y4 = "{:.5f}".format(y + h / 2)

    print(f"[{x1}, {y1}] --- [{x2}, {y2}]")
    print(f"                    |")
    print(f"[{x3}, {y3}] --- [{x4}, {y4}]")
    print()


def main(args=None):
    rclpy.init(args=args)

    dft_publisher = Dft_Publisher()

    detect()

    rclpy.spin(dft_publisher)

    dft_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
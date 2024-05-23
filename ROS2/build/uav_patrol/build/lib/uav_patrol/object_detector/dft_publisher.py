import rclpy
import threading
import socket
import queue
import time
import os
import shutil

from rclpy.node import Node
from location_msgs.msg import Defects, DefectBox, PixelPoint
from ultralytics import YOLO


SERVER_IP   = '127.0.0.1'
SERVER_PORT = 8899
MODEL_PATH = '/home/xs/UAV/ROS2/weights/defect.pt'
RESULTS_PREFIX = '/home/xs/UAV/Results'

class Dft_Publisher(Node):
    def __init__(self):
        super().__init__("dft_publisher")
        self.dft_publiser = self.create_publisher(Defects, "dfts", 10)
        self.msg_queue = queue.Queue()
        self.path_prefix_length = 0
        self.model = YOLO(MODEL_PATH) 

    def get_directory(self) -> str:
        try:
            existing_numbers = [int(name[3:]) for name in os.listdir(RESULTS_PREFIX) if name.startswith("run")]

            max_number = max(existing_numbers) if existing_numbers else -1

            new_directory = os.path.join(RESULTS_PREFIX, "run{}".format(max_number), "labels")

            if not os.path.exists(new_directory):
                os.mkdir(new_directory)

            new_directory = os.path.join(RESULTS_PREFIX, "run{}".format(max_number))

            return new_directory

        except Exception as e:
            print("Error:", e)
            return None

    def detect(self, source, img_id) -> map: 
        results = self.model(source, stream=True, imgsz=(640, 512))  
        
        res = {}
        for result in results:
            boxes = result.boxes  
            save_path = self.get_directory() +'/labels/results'+str(img_id)+'.bmp'
            # self.get_logger().info(save_path)
            result.save(filename=save_path) 
            res['boxes'] = boxes.xywh
            res['img_size'] = result.orig_shape

        self.get_logger().info(f"Object detection finished.")
        return res

    def publish_boxes(self, xywh, imgz, img_id):
        dfts = Defects()
        dfts.defect_id = img_id
        dfts.img_width = float(imgz[0])
        dfts.img_height = float(imgz[1])

        for box in xywh:
            x, y, w, h = box

            x1 = float("{:.5f}".format(x - w / 2))
            y1 = float("{:.5f}".format(y - h / 2))

            x2 = float("{:.5f}".format(x + w / 2))
            y2 = float("{:.5f}".format(y - h / 2))

            x3 = float("{:.5f}".format(x - w / 2))
            y3 = float("{:.5f}".format(y + h / 2))

            x4 = float("{:.5f}".format(x + w / 2))
            y4 = float("{:.5f}".format(y + h / 2))

            x = float("{:.5f}".format(x))
            y = float("{:.5f}".format(y))

            dft_box = DefectBox()

            dft_box.center = PixelPoint( x=x, y=y )
            dft_box.top_left = PixelPoint( x=x1, y=y1 )
            dft_box.top_right = PixelPoint( x=x2, y=y2 )
            dft_box.bottom_left = PixelPoint( x=x3, y=y3 )
            dft_box.bottom_right = PixelPoint( x=x4, y=y4 )

            dfts.defects.append(dft_box)

            # self.get_logger().info('++++++++++++++++++++++++++++++++++++++++++++++++++++')
            # self.get_logger().info("Center:", x, y)
            # self.get_logger().info('-----------------------------------------------')
            # self.get_logger().info("Corner:")
            # self.get_logger().info(f"[{x1}, {y1}] --- [{x2}, {y2}]")
            # self.get_logger().info(f"[{x3}, {y3}] --- [{x4}, {y4}]")
            # self.get_logger().info()

        self.dft_publiser.publish(dfts)
        self.get_logger().info(f"Publishing defects message, id: {dfts.defect_id}.")

def socket_serve(node):
    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    sock.bind((SERVER_IP, SERVER_PORT))

    while True:
        data, addr = sock.recvfrom(256)
        source = data.decode('utf-8')

        node.get_logger().info("Receive data %s from %s" % (source, addr))
        node.msg_queue.put(source)

def queue_handler(node):
    while True:
        if node.msg_queue.empty():
            time.sleep(1.0)
        else:
            msg = node.msg_queue.get()

            node.get_logger().info("Got a image path from queue")

            i = msg.index(':')
            path = msg[:i]
            img_id = int(msg[i+1:])

            res = node.detect(path, img_id)
            node.publish_boxes(res['boxes'], res['img_size'], img_id)


def main(args=None):
    rclpy.init(args=args)

    dft_publisher = Dft_Publisher()

    queue_thread = threading.Thread(target=queue_handler, args=(dft_publisher, ))
    queue_thread.start()

    socket_thread = threading.Thread(target=socket_serve, args=(dft_publisher, ))
    socket_thread.start()

    rclpy.spin(dft_publisher)

    dft_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
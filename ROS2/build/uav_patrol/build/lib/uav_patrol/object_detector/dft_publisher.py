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
RESULTS_PATH = '/home/xs/UAV/ROS2/results/'

class Dft_Publisher(Node):
    def __init__(self):
        super().__init__("dft_publisher")
        self.dft_publiser = self.create_publisher(Defects, "dfts", 10)
        self.msg_queue = queue.Queue()
        self.clear_folder(RESULTS_PATH)
        self.model = YOLO(MODEL_PATH) 

    def clear_folder(self, folder_path):
        for filename in os.listdir(folder_path):
            file_path = os.path.join(folder_path, filename)
            try:
                if os.path.isfile(file_path) or os.path.islink(file_path):
                    os.unlink(file_path)
                elif os.path.isdir(file_path):
                    shutil.rmtree(file_path)
            except Exception as e:
                print(f'Remove file {file_path} failed: {e}')

    def detect(self, source, img_id) -> map: 
        results = self.model(source, stream=True)  
        
        res = {}
        for result in results:
            boxes = result.boxes  
            save_path = RESULTS_PATH+'result'+str(img_id)+'.bmp'
            # self.get_logger().info(save_path)
            result.save(filename=save_path) 
            res['boxes'] = boxes.xywh
            res['img_size'] = result.orig_shape

        self.get_logger().info(f"YOLOv8 detection finished.")
        return res

    def socket_serve(self):
        sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        sock.bind((SERVER_IP, SERVER_PORT))

        while True:
            data, addr = sock.recvfrom(256)
            source = data.decode('utf-8')

            self.get_logger().info("Receive data %s from %s" % (source, addr))
            self.msg_queue.put(source)

    def queue_handler(self):
        while True:
            if self.msg_queue.empty():
                time.sleep(1.0)
            else:
                msg = self.msg_queue.get()

                i = msg.index(':')
                path = msg[:i]
                img_id = int(msg[i+1:])

                res = self.detect(path, img_id)
                self.publish_boxes(res['boxes'], res['img_size'], img_id)

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


def main(args=None):
    rclpy.init(args=args)

    dft_publisher = Dft_Publisher()

    queue_thread = threading.Thread(target=dft_publisher.queue_handler, args=())
    queue_thread.start()

    dft_publisher.socket_serve()
    # rclpy.spin(dft_publisher)

    dft_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
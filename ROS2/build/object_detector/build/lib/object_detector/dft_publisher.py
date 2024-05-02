import rclpy
import threading
import socket
import queue
import time

from rclpy.node import Node
from std_msgs.msg import Int16
from nmea_msgs.msg import Defects, DefectBox, PixelPoint
from ultralytics import YOLO
from typing import Tuple


SERVER_IP   = '127.0.0.1'
SERVER_PORT = 8890

class Dft_Publisher(Node):
    def __init__(self):
        super().__init__("dft_publisher")
        self.dft_publiser = self.create_publisher(Defects, "dfts", 10)
        self.msg_queue = queue.Queue()

    def detect(self, source) -> map:
        model = YOLO('defect.pt')  
        results = model(source, stream=True)  
        
        res = {}
        for result in results:
            boxes = result.boxes  
            result.save(filename='result.jpg') 
            res['boxes'] = boxes.xywh
            res['img_size'] = result.orig_shape
        return res

    def socket_serve(self):
        sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        sock.bind((SERVER_IP, SERVER_PORT))

        while True:
            data, addr = sock.recvfrom(256)
            source = data.decode('utf-8')

            print("Receive data %s from %s" % (source, addr))
            self.msg_queue.put(source)

    def queue_handler(self):
        while True:
            if self.msg_queue.empty():
                time.sleep(1.0)
            else:
                msg = self.msg_queue.get()
                print(f"Get a message {msg} from queue")

                i = msg.index(':')
                path = msg[:i]
                img_id = int(msg[i+1:])

                res = self.detect(path)
                self.publish_boxes(res['boxes'], res['img_size'], img_id)

    def publish_boxes(self, xywh, imgz, img_id):
        dfts = Defects()
        dfts.defect_id = img_id
        dfts.img_width = imgz[0]
        dfts.img_height = imgz[1]

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

            print('++++++++++++++++++++++++++++++++++++++++++++++++++++')
            print("Center:", x, y)
            print('-----------------------------------------------')
            print("Corner:")
            print(f"[{x1}, {y1}] --- [{x2}, {y2}]")
            print(f"[{x3}, {y3}] --- [{x4}, {y4}]")
            print()

        self.dft_publiser.publish(dfts)


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
import cv2
import time
import rclpy
import threading

from ultralytics import YOLO
from rclpy.node import Node
from location_msgs.msg import PanelBox
from copy import deepcopy

IMAGE_WIDTH         = 1920
IMAGE_HEIGHT        = 1080
FRAME_PER_SECOND    = 30

CONF_THRESHOLD      = 0.8

MODEL_PATH          = '/home/x650/UAV/ROS2/weights/new_panel.pt'
IMAGE_PATH          = '/home/x650/UAV/PV_IMAGE/'

class PanelDetector(Node):
    def __init__(self):
        super().__init__('panel_detector')

        self.panel_publisher = self.create_publisher(PanelBox, '/panel_box', 10)

        self.detect_model = YOLO(MODEL_PATH)

        self.counter = 0
        self.detect_counter = 0

        if not self.init_camera():
            return
        
        self.frame = None
        self.mutex = threading.Lock()
        
        self.create_timer(0.09, self.detect)

    def init_camera(self) -> bool:
        self.cap = cv2.VideoCapture(0)

        if not self.cap.isOpened():
            return False

        self.cap.set(cv2.CAP_PROP_FOURCC, cv2.VideoWriter_fourcc(*'MJPG'))
        self.cap.set(cv2.CAP_PROP_FRAME_WIDTH, IMAGE_WIDTH)
        self.cap.set(cv2.CAP_PROP_FRAME_HEIGHT, IMAGE_HEIGHT)
        self.cap.set(cv2.CAP_PROP_FPS, 30)

        return True
    
    def capture(self):
        while rclpy.ok():
            ret, frame = self.cap.read()
            if not ret:
                continue

            self.frame = frame

            if self.counter % 20 == 0:
                cv2.imwrite(IMAGE_PATH+'img-'+str(time.time())+'.jpg', frame)
                self.counter = 0

            self.counter += 1
    
    def detect(self):
        self.mutex.acquire()
        results = self.detect_model(self.frame, True)
        self.mutex.release()

        has_result = False

        for result in results:
            if len(result.boxes.conf) == 0:
                continue
            conf = result.boxes.conf[0]
            if conf < CONF_THRESHOLD:
                continue

            if self.detect_counter % 10 == 0:
                cv2.imwrite(IMAGE_PATH+'yolo-'+str(time.time())+'.jpg', result.plot())
                self.detect_counter = 0

            self.detect_counter += 1
        
            x, y, w, h = result.boxes.xywh[0]
            center_x = IMAGE_WIDTH/2 - x
            center_y = IMAGE_HEIGHT/2 - y

            has_result = True

        panel_box = PanelBox()
        if has_result:
            panel_box.x = float(center_x)
            panel_box.y = float(center_y)
            panel_box.w = float(w)
            panel_box.h = float(h)
            self.get_logger().info(f'{panel_box}')

        self.panel_publisher.publish(panel_box)


def main(args=None):
    rclpy.init(args=args)

    yolo_detector = PanelDetector()

    capture = threading.Thread(target=yolo_detector.capture)
    capture.start()

    rclpy.spin(yolo_detector)

    yolo_detector.cap.release()

    rclpy.shutdown()

if __name__ == "__main__":
    main()

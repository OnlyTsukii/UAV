import rclpy
import threading
import socket
import queue
import time
import os
import mmap
import struct
import posix_ipc
import numpy as np
import cv2
import threading
import math

from copy import deepcopy
from rclpy.node import Node
from ultralytics import YOLO
from location_msgs.msg import Defects, DefectBox, PixelPoint, Mix
from rclpy.qos import qos_profile_sensor_data
from rclpy.node import Node
from std_msgs.msg import Float64
from sensor_msgs.msg import NavSatFix


WIDTH = 640
HEIGHT = 512
TIME_THRES = 1
  
SHM_NAME = "/img_shm"
SEM_NAME = "/img_sem"
SHM_SIZE = WIDTH * HEIGHT * 2

TRACK_MODEL = '/home/x650/UAV/ROS2/weights/chair.pt'
DETECT_MODEL = '/home/x650/UAV/ROS2/weights/defect.pt'

RESULTS_FILE_PREFIX = "/home/x650/UAV/Results"
RAWS_FILE_PREFIX = "/raws"
LABELS_FILE_PREFIX = "/labels"

class AnomalyDetector(Node):
    def __init__(self):
        super().__init__("yolo_detector")

        # self.gps_sub = self.create_subscription(NavSatFix, "/mavros/global_position/global", self.gps_callback, qos_profile_sensor_data)
        self.gps_sub = self.create_subscription(NavSatFix, "gps", self.gps_callback, qos_profile_sensor_data)
        self.yaw_sub = self.create_subscription(Float64, "/mavros/global_position/compass_hdg", self.yaw_callback, qos_profile_sensor_data)
        self.mix_pub = self.create_publisher(Mix, "/mix", 10)
        
        # self.track_model = YOLO(TRACK_MODEL)
        self.track_model = YOLO(DETECT_MODEL)
        self.detect_model = YOLO(DETECT_MODEL)

        self.shm = None
        self.shm_map = None
        self.sem = None
        self.msg_queue = queue.Queue(30)
        self.timestamp = 0.0

        self.cur_yaw = 0.0
        self.cur_fix: NavSatFix = None

        self.mix_id = 0

        self.rst_path = self.init_dir()

    def yaw_callback(self, msg):
        self.cur_yaw = msg.data

    def gps_callback(self, msg: NavSatFix):
        self.cur_fix = msg

    def init_dir(self) -> str:
        try:
            existing_numbers = [int(name[3:]) for name in os.listdir(RESULTS_FILE_PREFIX) if name.startswith("run")]
            max_number = max(existing_numbers) if existing_numbers else -1
            max_number += 1

            path = os.path.join(RESULTS_FILE_PREFIX, "run{}".format(max_number))
            if not os.path.exists(path):
                os.mkdir(path)

            raws_path = os.path.join(path, 'raws')
            if not os.path.exists(raws_path):
                os.mkdir(raws_path)
            
            labels_path = os.path.join(path, 'labels')
            if not os.path.exists(labels_path):
                os.mkdir(labels_path)

            locations_path = os.path.join(path, 'locations')
            if not os.path.exists(locations_path):
                os.mkdir(locations_path)

            return path

        except Exception as e:
            self.get_logger().error(e)
            return None

    def param_init(self) -> None:
        while rclpy.ok():
            try:
                self.shm = posix_ipc.SharedMemory(SHM_NAME, posix_ipc.O_RDONLY)
                self.shm_map = mmap.mmap(self.shm.fd, SHM_SIZE, mmap.MAP_SHARED, mmap.PROT_READ, 0)
                self.sem = posix_ipc.Semaphore(SEM_NAME)
                self.get_logger().info(f"Params init finished")
                break
            except Exception as e:
                self.get_logger().info(e.args)
                time.sleep(1)

    def read_shm(self):
        self.sem.acquire()
        yuv_data = struct.unpack('655360B', self.shm_map)
        self.sem.release()

        yuv = np.array(yuv_data, np.uint8).reshape((HEIGHT, WIDTH, 2))
        rgb_image = cv2.cvtColor(yuv, cv2.COLOR_YUV2RGB_Y422)

        return rgb_image

    def shm_close(self):
        self.shm_map.close()
        self.shm.close_fd()
        self.sem.close()

    def tracker(self): 
        self.get_logger().info(f"Object tracking started")

        while rclpy.ok():
            frame = self.read_shm()

            save_path = self.rst_path+RAWS_FILE_PREFIX+'/raw'+str(self.mix_id)+'.bmp'
            cv2.imwrite(save_path, frame)

            now = time.time()
            if self.timestamp == 0 or now - self.timestamp >= TIME_THRES:
                if self.cur_fix == None:
                    continue

                msg_map = {}
                msg_map['frame'] = frame
                msg_map['yaw'] = self.cur_yaw
                msg_map['fix'] = self.cur_fix

                self.msg_queue.put(deepcopy(msg_map))
                self.timestamp = now

            results = self.track_model.track(frame, stream=True, persist=True)
            for result in results:
                annotated_frame = result.plot()
                # flipped_frame = cv2.flip(annotated_frame, 0)
                cv2.imshow("YOLOv8 Tracking", annotated_frame)

            if cv2.waitKey(1) & 0xFF == ord("q"):
                break

        cv2.destroyAllWindows()

    def detect(self, frame, img_id) -> map: 
        results = self.detect_model(frame, stream=True, imgsz=(640, 512))  
        
        res = {}
        for result in results:
            boxes = result.boxes  
            res['boxes'] = boxes.xywh
            res['img_size'] = result.orig_shape

            if len(boxes.xywh) > 0:
                save_path = self.rst_path+LABELS_FILE_PREFIX+'/label'+str(img_id)+'.bmp'
                result.save(filename=save_path) 

        self.get_logger().info(f"Object detection finished")
        return res

    def get_defects(self, xywh, imgz) -> Defects:
        dfts = Defects()
        dfts.img_width = float(imgz[1])
        dfts.img_height = float(imgz[0])

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

        return dfts

    def detector(self):
        while rclpy.ok():
            if self.msg_queue.empty():
                time.sleep(0.1)
                continue
            else:
                msg_map = self.msg_queue.get()

                # self.get_logger().info(f"{msg_map['fix']}")
    
                mix = Mix()
                mix.id = self.mix_id
                mix.gps_fix = msg_map['fix']

                if math.isnan(mix.gps_fix.latitude) or math.isnan(mix.gps_fix.longitude):
                    self.get_logger().info("Got a invalid gps message.")
                    continue

                detect_res = self.detect(msg_map['frame'], self.mix_id)
                defects = self.get_defects(detect_res["boxes"], detect_res["img_size"])
                
                mix.defects = defects
                mix.yaw = msg_map['yaw']

                self.mix_pub.publish(mix)

                self.mix_id = (self.mix_id + 1) % 65536
        pass
        

def main(args=None):
    rclpy.init(args=args)

    yolo_detector = AnomalyDetector()
    yolo_detector.param_init()

    tracker = threading.Thread(target=yolo_detector.tracker)
    tracker.start()
    detector = threading.Thread(target=yolo_detector.detector)
    detector.start()

    rclpy.spin(yolo_detector)

    yolo_detector.shm_close()
    yolo_detector.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
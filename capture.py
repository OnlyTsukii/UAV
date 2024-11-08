# import math
# from geopy.distance import geodesic


# def calculate_local_yaw(current_x, current_y, next_x, next_y):
#     delta_x = next_x - current_x
#     delta_y = next_y - current_y

#     target_yaw = math.atan2(delta_x, delta_y)  
#     target_yaw = (target_yaw + math.pi) % (2 * math.pi) - math.pi

#     res = math.degrees(target_yaw)

#     return res

# def calculate_global_yaw(lat1, lon1, lat2, lon2):
#     lat1 = math.radians(lat1)
#     lon1 = math.radians(lon1)
#     lat2 = math.radians(lat2)
#     lon2 = math.radians(lon2)
    
#     delta_lon = lon2 - lon1
    
#     x = math.sin(delta_lon) * math.cos(lat2)
#     y = math.cos(lat1) * math.sin(lat2) - math.sin(lat1) * math.cos(lat2) * math.cos(delta_lon)
    
#     target_yaw = math.atan2(x, y)
#     target_yaw = (target_yaw + math.pi) % (2 * math.pi) - math.pi
    
#     res = math.degrees(target_yaw)
    
#     return res

# def get_distance(lat1, lon1, lat2, lon2):
#     point1 = (lat1, lon1)
#     point2 = (lat2, lon2)

#     distance = geodesic(point1, point2).m
#     return distance

# res = calculate_global_yaw(31.31043548050823, 120.6353190699221, 31.31039540855868, 120.6353257897984)
# print(res)

import cv2
import time
import threading
import signal

IMAGE_WIDTH         = 1920
IMAGE_HEIGHT        = 1080
DIRECTORY_PREFIX    = '/home/x650/UAV/PV_IMAGE/'

lock = threading.Lock()
stop_flag = False
count = 0

def start_capture():
    global stop_flag, count

    cap = cv2.VideoCapture(0)

    if not cap.isOpened():
        exit()

    cap.set(cv2.CAP_PROP_FRAME_WIDTH, IMAGE_WIDTH)
    cap.set(cv2.CAP_PROP_FRAME_HEIGHT, IMAGE_HEIGHT)
    cap.set(cv2.CAP_PROP_FPS, 30)

    while not stop_flag:
        ret, frame = cap.read()
        if not ret:
            continue
        
        count += 1
        if count % 5 == 0:
            write_frame(frame)
            count = 0

        if cv2.waitKey(1) & 0xFF == ord('q'):
            break

    cap.release()
    cv2.destroyAllWindows()


def write_frame(frame):
    timestamp = time.time()
    lock.acquire()
    cv2.imwrite(DIRECTORY_PREFIX + str(timestamp) + ".jpg", frame)
    lock.release()

def signal_handler():
    global stop_flag
    stop_flag = True

signal.signal(signal.SIGINT, signal_handler)

start_capture()

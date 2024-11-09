import cv2
from ultralytics import YOLO

cap = cv2.VideoCapture(0)

cap.set(cv2.CAP_PROP_FOURCC, cv2.VideoWriter_fourcc(*'MJPG'))
cap.set(cv2.CAP_PROP_FRAME_WIDTH, 1920)
cap.set(cv2.CAP_PROP_FRAME_HEIGHT, 1080)
cap.set(cv2.CAP_PROP_FPS, 30)

path = '/home/x650/UAV/ROS2/weights/panel.pt'
model = YOLO(path)

# results = model('/home/x650/UAV/test_images')
# count = 0
# for result in results:
#     frame = result.plot()
#     cv2.imwrite('res'+str(count)+'.jpg', frame)
#     count += 1

while True:
    ret, frame = cap.read()
    if not ret:
        continue
    
    results = model(frame, True)
    for result in results:
        frame = result.plot()
        cv2.imshow("window", frame)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
        
        # frame = result.plot()
        # cv2.imwrite('res'+str(count)+'.jpg', frame)
        # count += 1
        # # print(result.boxes)
        # x, y, w, h = result.boxes.xywh[0]
        # center_x = 1920/2 - x
        # center_y = 1080/2 - y
        # print(center_x, center_y)


# import cv2
# import time
# import threading
# import signal

# IMAGE_WIDTH         = 1920
# IMAGE_HEIGHT        = 1080
# DIRECTORY_PREFIX    = '/home/x650/UAV/PV_IMAGE/'

# lock = threading.Lock()
# stop_flag = False
# count = 0

# def start_capture():
#     global stop_flag, count

#     cap = cv2.VideoCapture(0)

#     if not cap.isOpened():
#         exit()

#     cap.set(cv2.CAP_PROP_FOURCC, cv2.VideoWriter_fourcc(*'MJPG'))
#     cap.set(cv2.CAP_PROP_FRAME_WIDTH, IMAGE_WIDTH)
#     cap.set(cv2.CAP_PROP_FRAME_HEIGHT, IMAGE_HEIGHT)
#     cap.set(cv2.CAP_PROP_FPS, 30)

#     while not stop_flag:
#         ret, frame = cap.read()
#         if not ret:
#             continue
        
#         cv2.imshow("Window", frame)
#         print(time.time())

#         if cv2.waitKey(1) & 0xFF == ord('q'):
#             break

#     cap.release()
#     cv2.destroyAllWindows()

# start_capture()

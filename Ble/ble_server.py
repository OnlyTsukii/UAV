import threading
import serial
import time
import subprocess

SYS_PASSWORD = '123'

ROS2_START      = 0
ROS2_STOP       = 1
ROS2_RESTART    = 2

CAMERA_START    = 3
CAMERA_STOP     = 4
CAMERA_RESTART  = 5

ALL_STOP        = 6
ALL_START       = 7
ALL_RESTART     = 8

class BLEServer:
    def __init__(self, port, baudrate=115200) -> None:
        self.serial_port = serial.Serial(port, baudrate)

    def handle_ctrlcode(self, ctrl_code):
        command = None
        if ctrl_code == ROS2_START:
            command = ['sudo', '-S', 'systemctl', 'start', 'uav']
        elif ctrl_code == ROS2_STOP:
            command = ['sudo', '-S', 'systemctl', 'stop', 'uav']
        elif ctrl_code == ROS2_RESTART:
            command = ['sudo', '-S', 'systemctl', 'restart', 'uav']
        elif ctrl_code == CAMERA_START:
            command = ['sudo', '-S', 'systemctl', 'start', 'camera']
        elif ctrl_code == CAMERA_STOP:
            command = ['sudo', '-S', 'systemctl', 'stop', 'camera']
        elif ctrl_code == CAMERA_RESTART:
            command = ['sudo', '-S', 'systemctl', 'restart', 'camera']

        if command:
            process = subprocess.Popen(command, stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
            stdout, stderr = process.communicate(SYS_PASSWORD + '\n')
            if process.returncode == 0:
                print(f"Command succeeded: {stdout}")
            else:
                print(f"Command failed: {stderr}")

    def slave_start(self):
        while True:
            b = self.serial_port.read()
            if b.decode('utf-8') == '@':
                ctrl_code = int(self.serial_port.read(2).decode('utf-8'), 16)
                print("Received data:", ctrl_code)
                self.handle_ctrlcode(ctrl_code)

if __name__ == '__main__':
    while True:
        try:
            ble_server = BLEServer('/dev/ttyUSB0', baudrate=115200)
            serial_thread = threading.Thread(target=ble_server.slave_start, args=(), daemon=True)
            serial_thread.start()

            while True:
                time.sleep(1) 

        except Exception as e:
            print(f"Error: {e}")
            time.sleep(2)

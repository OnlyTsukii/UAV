from constant import *
from geometry_msgs.msg import Vector3, Point

class Waypoint():
    def __init__(self, id, type, mission, frame, vel_x, vel_y, vel_z, pos_x, pos_y, pos_z, yaw=float('nan'), yaw_rate=0.0):
        self.id = id
        self.type = type
        self.mission = mission
        self.frame = frame

        self.velocity = None

        if vel_x != 0 or vel_y != 0 or vel_z != 0:
            vel = Vector3()
            vel.x = float(vel_x)
            vel.y = float(vel_y)
            vel.z = float(vel_z)
            self.velocity = vel
        
        if type == TYPE_BODY_MOVE:
            pos = Point()
            pos.x = float(pos_x)
            pos.y = float(pos_y)
            pos.z = float(pos_z)
            self.position = pos
        else:
            self.latitude = float(pos_x)
            self.longitude = float(pos_y)
            self.altitude = float(pos_z)

        self.yaw = yaw
        self.yaw_rate = yaw_rate
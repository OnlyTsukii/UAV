import math
from geopy.distance import geodesic


def calculate_local_yaw(current_x, current_y, next_x, next_y):
    delta_x = next_x - current_x
    delta_y = next_y - current_y

    target_yaw = math.atan2(delta_x, delta_y)  
    target_yaw = (target_yaw + math.pi) % (2 * math.pi) - math.pi

    res = math.degrees(target_yaw)

    return res

def calculate_global_yaw(lat1, lon1, lat2, lon2):
    lat1 = math.radians(lat1)
    lon1 = math.radians(lon1)
    lat2 = math.radians(lat2)
    lon2 = math.radians(lon2)
    
    delta_lon = lon2 - lon1
    
    x = math.sin(delta_lon) * math.cos(lat2)
    y = math.cos(lat1) * math.sin(lat2) - math.sin(lat1) * math.cos(lat2) * math.cos(delta_lon)
    
    target_yaw = math.atan2(x, y)
    target_yaw = (target_yaw + math.pi) % (2 * math.pi) - math.pi
    
    res = math.degrees(target_yaw)
    
    return res

def get_distance(lat1, lon1, lat2, lon2):
    point1 = (lat1, lon1)
    point2 = (lat2, lon2)

    distance = geodesic(point1, point2).m
    return distance
    
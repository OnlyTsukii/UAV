#!/bin/bash

export TERM=xterm-256color
/home/x650/UAV/Camera/Demo &

/bin/sleep 2

source /opt/ros/humble/setup.bash
ros2 launch mavros px4_sitl.launch &

/bin/sleep 2

source /home/x650/UAV/ROS2/install/setup.bash
ros2 launch uav_patrol uav_patrol.launch.py 


#!/bin/bash

source /opt/ros/galactic/setup.bash
ros2 run mavros mavros_node --ros-args --params-file /home/xs/mavros_param_1.yaml &

exit 0

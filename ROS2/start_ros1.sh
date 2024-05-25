#!/bin/bash

source /opt/ros/noetic/setup.bash

roscore

sleep 2

rosrun mavros mavros_node --ros-args --params-file /home/xs/mavros_param_1.yaml &

sleep 2

rosservice call /mavros/set_stream_rate 0 10 1

exit 0
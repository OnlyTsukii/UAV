#!/bin/bash

source /home/ccl/UAV/ROS2/install/setup.bash
ros2 run cmd_handler cmd_publisher

wait
exit 0


def print_boxes(xywh):
    x, y, w, h = xywh

    print(x, y, w, h)

    x1 = "{:.5f}".format(x - w / 2)
    y1 = "{:.5f}".format(y - h / 2)

    x2 = "{:.5f}".format(x + w / 2)
    y2 = "{:.5f}".format(y - h / 2)

    x3 = "{:.5f}".format(x - w / 2)
    y3 = "{:.5f}".format(y + h / 2)

    x4 = "{:.5f}".format(x + w / 2)
    y4 = "{:.5f}".format(y + h / 2)

    print(f"[{x1}, {y1}] --- [{x2}, {y2}]")
    print(f"                    |")
    print(f"[{x3}, {y3}] --- [{x4}, {y4}]")
    print()
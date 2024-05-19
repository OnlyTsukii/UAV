#!/bin/bash

# set hotspot name and password
SSID="uav"
PASSWORD="12345678"

# start hotspot
nmcli device wifi hotspot ifname wlx0013ef1f2653 ssid "$SSID" password "$PASSWORD"


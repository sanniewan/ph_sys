#!/bin/bash

# Turns the specified relay either on or off


# Check if two arguments are passed
if [ "$#" -ne 2 ]; then
    echo "Usage: $0 <port> <state>"
    echo "Example: $0 1 True"
    exit 1
fi


PORT=$1
STATE=$2
SERVICE_NAME="/irrigation_pump_node"
SERVICE_TYPE="interfaces/srv/IrrigationPumpsService"

ros2 service call $SERVICE_NAME $SERVICE_TYPE "{port: $PORT, state: $STATE}"
#!/bin/bash

# Dispenses a given amount of volume in mL on the given pump type


# Check if two arguments are passed
if [ "$#" -ne 2 ]; then
    echo "Usage: $0 <volume> <pump_type>"
    echo "Example: $0 8.0 ph_up"
    exit 1
fi


VOLUME=$1
PUMP_TYPE=$2
SERVICE_NAME="/peristaltic_pump"
SERVICE_TYPE="interfaces/srv/PeristalticPumpService"

ros2 service call $SERVICE_NAME $SERVICE_TYPE "{volume: $VOLUME, pump_type: '$PUMP_TYPE'}"
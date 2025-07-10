#!/bin/bash

IMAGE_TAG=latest
IMAGE_NAME=ph_sys
CONTAINER_NAME=ph_sys

docker run \
    -it \
    --rm \
    --network host \
    -v /etc/localtime:/etc/localtime:ro \
    --mount type=bind,source=$HOME/ph_sys,target=/workspace/ph_sys_ws \
    -w /workspace/ph_sys_ws \
    --privileged \
    --device /dev/i2c-1 \
    --name $CONTAINER_NAME \
    $IMAGE_NAME:$IMAGE_TAG
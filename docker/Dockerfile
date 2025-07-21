FROM arm64v8/ros:humble-ros-base-jammy

# Install tools
RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get update && \
    apt-get install -y \
        python3-numpy \
        i2c-tools \
        ros-dev-tools \
        python3-pip \
        python3-dev \
        libgpiod-dev \
        && rm -rf /var/lib/apt/lists/*

RUN python3 -m pip install setuptools==58.2.0

# Copy requirements.txt into the image
COPY ./docker/requirements.txt /tmp/requirements.txt

# Install Python dependencies
ENV PIP_BREAK_SYSTEM_PACKAGES=1
RUN pip3 install --upgrade pip && \
    pip3 install -r /tmp/requirements.txt

# # Dependencies (didn't work for me)
# COPY ./docker/30-custom.list /etc/ros/rosdep/sources.list.d/30-custom.list
# COPY ./docker/custom-rosdep.yaml /etc/ros/rosdep/sources.list.d/custom-rosdep.yaml

# Sets working directory in docker container to /ph_sys_ws/src. Copies the contents of the src folder
# from your host machine into the current directory inside the container.
WORKDIR /ph_sys_ws/src
ADD ./src .

# Install dependencies
WORKDIR /ph_sys_ws
RUN . /opt/ros/humble/setup.sh && \
    rosdep update && \
    rosdep install --from-paths src --ignore-src -r -y && \
    rm -rf /var/lib/apt/lists/* && \
    rm -rf ./src

WORKDIR /ph_sys_ws
CMD ["bash"]
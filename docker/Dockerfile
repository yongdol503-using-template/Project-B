ARG ROS_DISTRO=humble
ARG ROS_PACKAGE=desktop-full

FROM osrf/ros:${ROS_DISTRO}-${ROS_PACKAGE}

RUN apt-get update; apt-get upgrade -y; rm -rf /var/lib/apt/lists/*

RUN apt-get update; \
    apt-get install \
                vim \
                nano \
                git \
                python3-pip \
                net-tools \
                tmux \
                htop \
                ros-${ROS_DISTRO}-cyclonedds \
                ros-${ROS_DISTRO}-rmw-cyclonedds-cpp \
                -y; \
    rm -rf /var/lib/apt/lists/*

RUN adduser dev

RUN mkdir /workspace

WORKDIR /workspace
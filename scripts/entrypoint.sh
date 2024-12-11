#!/bin/bash

echo -e "\033[1;32mentrypoint.sh: Starting the application\033[0m"

echo "source /opt/ros/humble/setup.bash 
source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash 
source /usr/share/vcstool-completion/vcs.bash 
source /usr/share/colcon_cd/function/colcon_cd.sh" >> ~/.bashrc
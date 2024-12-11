#!/bin/bash

colcon build --packages-select calculator_pkg --symlink-install
source install/setup.bash
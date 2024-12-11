#!/bin/bash

GREEN="\033[1;32m"
YELLOW="\033[1;33m"
RED="\033[1;31m"
RESET="\033[0m"

echo -e "${GREEN}build.sh: Building the package${RESET}"

set +e
colcon build --packages-select calculator_pkg --symlink-install

if [ $? -eq 0 ]; then
    echo -e "${GREEN}build.sh: Finished building the package${RESET}"
else
    echo -e "${RED}build.sh: Failed to build the package${RESET}"
fi
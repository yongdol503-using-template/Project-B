#!/bin/bash

# Run unit tests
echo "Running unit tests"
colcon test --packages-select calculator_pkg
colcon test-result --verbose

# Todo: add coverage report
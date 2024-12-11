#!/bin/bash

echo -e "\033[1;32munit_test.sh: Running unit tests\033[0m"

set +e
colcon test --packages-select calculator_pkg
colcon test-result --all

if [ $? -eq 0 ]; then
    echo -e "\033[1;34munit_test.sh: All tests passed\033[0m"
else
    echo -e "\033[1;31munit_test.sh: Some tests failed\033[0m"
fi
echo -e "\033[1;32munit_test.sh: Finished running unit tests\033[0m"

# Todo: add coverage report
cmake_minimum_required(VERSION 3.8)
project(calculator_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

add_library(calculator_lib SHARED
  src/calculator.cpp
)
target_include_directories(calculator_lib PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)
ament_target_dependencies(calculator_lib PUBLIC rclcpp std_msgs)

add_executable(calculator_node src/main.cpp)
target_link_libraries(calculator_node calculator_lib)

install(TARGETS
  calculator_node
  DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
  message("Building tests.")
  find_package(ament_cmake_gtest REQUIRED)

  file(GLOB_RECURSE TEST_SOURCE_FILES test/*.cpp)
  ament_add_gtest(test_calculator 
    ${TEST_SOURCE_FILES}
  )
  target_link_libraries(test_calculator calculator_lib)
  ament_target_dependencies(test_calculator rclcpp std_msgs)

  # find_package(ament_lint_auto REQUIRED)
  # set(ament_cmake_copyright_FOUND TRUE)
  # set(ament_cmake_cpplint_FOUND TRUE)
  # ament_lint_auto_find_test_dependencies()
endif()

ament_package()

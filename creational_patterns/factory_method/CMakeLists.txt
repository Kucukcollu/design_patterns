cmake_minimum_required(VERSION 3.10)
project(factory_method)

# Require C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/src)

# Collect source files
set(SOURCES
    src/lidar_odometry.cpp
    src/lidar_odometry_factory.cpp
    src/visual_odometry.cpp
    src/visual_odometry_factory.cpp
)

# Executable
add_executable(odometry_demo
    app/demo.cpp
    ${SOURCES}
)

target_include_directories(odometry_demo PRIVATE include)

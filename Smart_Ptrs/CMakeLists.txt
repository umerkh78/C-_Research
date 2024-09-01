cmake_minimum_required(VERSION 3.10)
project(my_project)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX)
set(CMAKE_PREFIX_PATH "/home/umer/Benchmark/benchmark/build")

# Add the executable
add_executable(my_project src/smart_ptr.cpp)

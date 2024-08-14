cmake_minimum_required(VERSION 3.10)
project(my_project)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX)

# Add the executable
add_executable(my_project src/smart_ptr.cpp)

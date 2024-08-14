cmake_minimum_required(VERSION 3.10)
project(my_project)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(my_project src/move_advanced.cpp)
#benchmark_DIR(C:\Users\care\Desktop\Google\benchmark\build)

# Find and link Google Benchmark
set(CMAKE_PREFIX_PATH "C:/Users/care/Desktop/Google/benchmark/build")
find_package(benchmark REQUIRED)
target_link_libraries(my_project benchmark::benchmark)

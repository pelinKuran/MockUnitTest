cmake_minimum_required(VERSION 3.15.0)
project(UnitTests VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
enable_testing()

add_subdirectory(source/summation)
add_subdirectory(tests)



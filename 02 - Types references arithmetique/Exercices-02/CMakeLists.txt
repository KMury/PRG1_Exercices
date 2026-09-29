cmake_minimum_required(VERSION 4.3)
project(Exercises_01)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wconversion -Wsign-conversion -pedantic")

add_executable(Exercises_01 main.cpp)

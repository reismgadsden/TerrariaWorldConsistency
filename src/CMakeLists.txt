cmake_minimum_required(VERSION 3.21)
project(src C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../..")

add_executable(src main.c)

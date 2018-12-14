cmake_minimum_required(VERSION 3.12)
project(Assignment3 C)

set(CMAKE_C_STANDARD 99)

add_executable(Assignment3 main.c)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")
set(SOURCE_FILES1 main.c)
add_executable(project ${SOURCE_FILES1})
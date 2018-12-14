cmake_minimum_required(VERSION 3.12)
project(Assignment3 C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FILES} -Wall")

set(SOURCE_FILES1 main.c)
add_executable(main ${SOURCE_FILES1})
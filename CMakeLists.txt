cmake_minimum_required(VERSION 3.12)
project(Assignment3 C)

set(CMAKE_C_STANDARD 99)

add_executable(Assignment3 cmake-build-debug/main.c)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")
set(SOURCE_FILES1 cmake-build-debug/main.c)
add_executable(main ${SOURCE_FILES1})
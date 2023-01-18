cmake_minimum_required(VERSION 3.23)
project(trigame C)

set(CMAKE_C_STANDARD 99)

add_executable(trigame game.h game.c test.c)

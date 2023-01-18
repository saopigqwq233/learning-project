cmake_minimum_required(VERSION 3.24)
project(Trimoku_game C)

set(CMAKE_C_STANDARD 11)

add_executable(Trimoku_game main.c Game.h Game.c)

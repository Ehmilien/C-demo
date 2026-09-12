cmake_minimum_required(VERSION 4.3)
project(C_demo C)

set(CMAKE_C_STANDARD 11)

add_executable(C_demo
        calculator.c
        http.c
        main.c)

cmake_minimum_required(VERSION 4.3)
project(C_demo C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 17)
set_property(TARGET my_target PROPERTY CXX_STANDARD 17)

find_package(uuid_v4 REQUIRED)
target_link_libraries(C_demo PRIVATE uuid::uuid_v4_LIBRARIES)

add_executable(C_demo
        calculator.c
        main.c
        main.cpp)

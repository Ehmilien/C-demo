cmake_minimum_required(VERSION 4.3)
project(C_demo
  VERSION 1.0.0
  LANGUAGES CXX
  DESCRIPTION ""
)

set(CMAKE_C_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 23)
set_property(TARGET my_target PROPERTY CXX_STANDARD 23)

set_property(AVX ON)

find_package(uuid_v4 REQUIRED)
target_link_libraries(C_demo PRIVATE uuid_v4::uuid_v4)

add_executable(C_demo
        calculator.c
        main.c
        main.cpp)

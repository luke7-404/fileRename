cmake_minimum_required(VERSION 3.31)

project(MyProject LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_C_STANDARD 23)

add_executable(main
    src/main.cpp
)
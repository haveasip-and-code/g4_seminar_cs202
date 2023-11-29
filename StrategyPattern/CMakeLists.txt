cmake_minimum_required(VERSION 3.26)
project(StrategyPattern)

set(CMAKE_CXX_STANDARD 17)

add_executable(StrategyPattern main.cpp
        shipping.h
        shipping.cpp)

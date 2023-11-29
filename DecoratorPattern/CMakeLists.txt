cmake_minimum_required(VERSION 3.26)
project(DecoratorPattern)

set(CMAKE_CXX_STANDARD 17)

add_executable(DecoratorPattern main.cpp
        beverage.cpp
        beverage.h
        decorators.cpp)

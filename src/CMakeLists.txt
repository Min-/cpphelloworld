cmake_minimum_required(VERSION 3.2)
project(cpphelloworld)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++2a")


add_library(src Maybe.cpp Maybe.hpp log.cpp log.hpp pch.cpp pch.h Show.cpp Show.h
    classHeader.cpp classHeader.hpp Comparable.h Stack.h)
add_executable(helloworld main.cpp)
add_executable(stack main_stack.cpp)

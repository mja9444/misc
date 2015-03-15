cmake_minimum_required (VERSION 2.6)
project (virtual_destructor)
set(CMAKE_CXX_FLAGS "-fdump-class-hierarchy")
add_executable(virtual_destructor virtual_destructor.cpp)
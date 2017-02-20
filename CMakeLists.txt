cmake_minimum_required(VERSION 3.5)
project(algorithm_prep_with_c)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        linkedlist.h
        node.h main.cpp list.h stack.h stack.cpp queue.h queue.cpp)

add_executable(algorithm_prep_with_c ${SOURCE_FILES} main.cpp)
cmake_minimum_required(VERSION 3.0)

project(Friends)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(CMAKE_BUILD_TYPE Debug)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(main_exe main.cpp src/friend_to_func.cpp)
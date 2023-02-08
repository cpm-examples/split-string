cmake_minimum_required(VERSION 3.1.0)
project(split-string VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_library(split-string
	src/split-string.cpp
)

target_include_directories(split-string
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/include
)

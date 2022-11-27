cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

set(PROJECT_NAME Coding)
project("${PROJECT_NAME}")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

include_directories("inc/")

add_executable("${PROJECT_NAME}" 				main.cpp
								inc/Header.h 
								Sources/Read_XY.cpp 
								Sources/Checking_condition.cpp
								Sources/Recording_answer.cpp
								Sources/Digits.cpp)
file(COPY XY.txt DESTINATION "/")

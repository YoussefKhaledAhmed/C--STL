cmake_minimum_required(VERSION 3.0)

project(STL_study) # name of the project


# C++ version
set(CMAKE_CXX_STANDARD 17)

include_directories(inc/)

set(source 
src/main.cpp
src/arr_test.cpp
src/vector_test.cpp)

add_executable(${PROJECT_NAME} ${source})
# cmake version
cmake_minimum_required(VERSION 3.10)

set(CMAKE_C_COMPILER "C:/Program Files/mingw64/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "C:/Program Files/mingw64/bin/g++.exe")

# project name
project(MyStep)

#cpp standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# output directory
set(LIBRARY_OUTPUT_PATH  "${PROJECT_SOURCE_DIR}/bin")

# The following command add .lib before .a but cannot change the real postfix
# set(CMAKE_RELEASE_POSTFIX ".lib")

# create static library
add_library(mymath_static STATIC "${PROJECT_SOURCE_DIR}/src/mymath.cpp")

# create dynamic library
add_library(mymath_dynamic SHARED "${PROJECT_SOURCE_DIR}/src/mymath.cpp")



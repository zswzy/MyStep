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
set(EXECUTABLE_OUTPUT_PATH  "${PROJECT_SOURCE_DIR}/bin")

# target executable file
add_executable(MyStep "${PROJECT_SOURCE_DIR}/src/main.cpp")

# include directory
target_include_directories(MyStep PUBLIC "${PROJECT_SOURCE_DIR}/3rdparty/trdlib")

# link libraries
# If static library
# target_link_libraries(MyStep PUBLIC "${PROJECT_SOURCE_DIR}/3rdparty/trdlib/libmymath_static.a")
# If dynamic library
target_link_libraries(MyStep PUBLIC "${PROJECT_SOURCE_DIR}/3rdparty/trdlib/libmymath_static.dll" 
    "${PROJECT_SOURCE_DIR}/3rdparty/trdlib/libmymath_static.dll.a")

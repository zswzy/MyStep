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
# We can use this 
# add_executable(MyStep 
# "${PROJECT_SOURCE_DIR}/src/main.cpp"
# "${PROJECT_SOURCE_DIR}/src/mymath_1.cpp"
# "${PROJECT_SOURCE_DIR}/src/mymath_2.cpp")
# Or more simply globbing all .cpp file in src folder:
file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")
add_executable(MyStep 
    ${SOURCES} 
    ${PROJECT_SOURCE_DIR}/3rdparty/trdmath/trdmath_1.cpp)

target_include_directories(MyStep PUBLIC "3rdparty/trdmath" "3rdparty/trdprint")



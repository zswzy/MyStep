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



# to build the target, using the followign command
# goto build folder
# this is the folder where the built files and middle files are created
# build the project: cmake ../
# If I want to switch another generator, for instance, g++ (called "MinGW Makefiles" in Cmake)
# Use this build command: cmake ../ -G "MinGW Makefiles"
# Always make sure that the above operation in the /build folder to make the main folder clean
# Then build target: (in the /build folder) cmake --build .
# I should see the output file in /bin folder
# in build folder, run ../bin/Tutorial.exe
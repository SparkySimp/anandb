# CMakeList.txt : CMake project for anandb, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (anandb "anandb.cpp" "anandb.h" "headers/datatypes.h")

# TODO: Add tests and install targets if needed.

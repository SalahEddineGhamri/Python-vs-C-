cmake_minimum_required(VERSION 2.8)

# If headers are in other directory
# include_directories( ${MY_SOURCE_DIR}/src )

# For libraries like OPENCV.
# find_package
# target_link_libraries

set(CMAKE_CXX_STANDARD 14)  # enable C++14 standard
project( TASK1 )
add_executable( Task1App main.cpp CsvInOut.cpp CsvInOut.hpp )

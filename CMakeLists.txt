cmake_minimum_required(VERSION 3.10)
project(FileCompressionTool)
set(CMAKE_CXX_STANDARD 11)
add_executable(FileCompressionTool main.cpp file_io.cpp rle_compressor.cpp huffman_compressor.cpp)
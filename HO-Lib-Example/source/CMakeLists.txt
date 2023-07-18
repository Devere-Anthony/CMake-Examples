# Project level CMakeLists.txt
cmake_minimum_required(VERSION 3.20)
project(CatchTest LANGUAGES CXX)
add_executable(CatchTest test.cc)
set_property(TARGET CatchTest PROPERTY CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# In order to use the header-only library, just include the entire library
# folder location.
target_include_directories(CatchTest PRIVATE header-only)
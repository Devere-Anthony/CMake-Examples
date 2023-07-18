# Project level CMakeLists.txt
cmake_minimum_required(VERSION 3.2)
project(CatchTest LANGUAGES CXX)
add_executable(CatchTest test.cc)
set_property(TARGET CatchTest PROPERTY CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Prevent in-source builds
if (CMAKE_BINARY_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
    message(FATAL_ERROR "Building in-source is not supported! Create a build dir and remove ${CMAKE_SOURCE_DIR}/CMakeCache.txt")
endif()

# Catch2 exports a namespaced CMake target, simply make the following calls and
# then include the needed headers in the source file 
find_package(Catch2 3 REQUIRED)
target_link_libraries(CatchTest PRIVATE Catch2::Catch2WithMain)
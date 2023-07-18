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

# Try to support build Catch2 from source and searching for it on the system
Include(FetchContent)
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.0.1 # or a later release
  FIND_PACKAGE_ARGS NAMES Catch2
)
FetchContent_MakeAvailable(Catch2)
target_link_libraries(CatchTest PRIVATE Catch2::Catch2WithMain)
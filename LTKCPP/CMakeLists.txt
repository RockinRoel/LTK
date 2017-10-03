cmake_minimum_required(VERSION 2.4)
project(LTKCPP)

cmake_policy(SET CMP0003 NEW)

set(CMAKE_CXX_STANDARD 14)

include_directories(/usr/include/libxml2)
include_directories(${CMAKE_BINARY_DIR}/Library)

add_subdirectory(Library)
add_subdirectory(Examples)
add_subdirectory(Tests)

install(
    DIRECTORY Library/
    DESTINATION include/ltkcpp
    FILES_MATCHING
    PATTERN "LLRP.org" EXCLUDE
    PATTERN "*.h")

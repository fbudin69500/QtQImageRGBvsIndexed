cmake_minimum_required(VERSION 3.0.0)
project(QtQImageRGBvsIndexed)

find_package(Qt REQUIRED)
include(${QT_USE_FILE})

set( SRC QtQImageRGBvsIndexed.cpp)

add_executable(QtQImageRGBvsIndexed ${SRC})
target_link_libraries(QtQImageRGBvsIndexed ${QT_LIBRARIES})

cmake_minimum_required(VERSION 3.0.0)
project(QtQImageRGBvsIndexed)

find_package(Qt5 REQUIRED COMPONENTS Core Gui)
set( SRC QtQImageRGBvsIndexed.cpp)

include_directories(${Qt5Core_INCLUDES} ${Qt5Gui_INCLUDES})
add_executable(QtQImageRGBvsIndexed ${SRC})
target_link_libraries(QtQImageRGBvsIndexed ${Qt5Core_LIBRARIES} ${Qt5Gui_LIBRARIES})


cmake_minimum_required(VERSION 3.14)
project(PDS_CollaborativeTextEditor_2020)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
Set(CMAKE_AUTORCC ON)

find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Charts REQUIRED)

list(APPEND LIBRARIES
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        Qt5::Charts)

list(REMOVE_DUPLICATES LIBRARIES)

add_executable(PDS_CollaborativeTextEditor_2020 main.cpp)

target_link_libraries(PDS_CollaborativeTextEditor_2020 ${LIBRARIES})
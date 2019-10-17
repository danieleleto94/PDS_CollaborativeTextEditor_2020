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
find_package(libmongocxx REQUIRED)
find_package(libbsoncxx REQUIRED)

list(APPEND LIBRARIES
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        Qt5::Charts)

list(REMOVE_DUPLICATES LIBRARIES)

include_directories(${LIBMONGOCXX_INCLUDE_DIR})
include_directories(${LIBBSONCXX_INCLUDE_DIR})
include_directories("/usr/local/include/mongocxx/v_noabi")
include_directories("/usr/local/include/bsoncxx/v_noabi")
include_directories("/usr/local/include/libmongoc-1.0")
include_directories("/usr/local/include/libbson-1.0")
include_directories("/usr/local/lib")

add_executable(PDS_CollaborativeTextEditor_2020 ${SOURCE_FILES} main.cpp lib/server/message.cpp lib/server/message.h lib/server/network_manager.cpp lib/server/network_manager.h lib/server/user.cpp lib/server/user.h lib/server/crdt.cpp lib/server/crdt.h lib/server/file.cpp lib/server/file.h lib/server/character.cpp lib/server/character.h)

target_link_libraries(PDS_CollaborativeTextEditor_2020 ${LIBRARIES})
target_link_libraries(PDS_CollaborativeTextEditor_2020 ${LIBMONGOCXX_LIBRARIES})
target_link_libraries(PDS_CollaborativeTextEditor_2020 ${LIBBSONCXX_LIBRARIES})
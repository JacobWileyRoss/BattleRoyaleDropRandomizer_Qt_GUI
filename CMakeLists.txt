cmake_minimum_required(VERSION 3.1.0)

project(BattleRoyaleDropRandomizer_Qt_GUI)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(BattleRoyaleDropRandomizer_Qt_GUI
        main.cpp
        mainwindow.h
        mainwindow.cpp
        mainwindow.ui
        )

target_link_libraries(BattleRoyaleDropRandomizer_Qt_GUI Qt5::Widgets)
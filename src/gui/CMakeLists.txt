cmake_minimum_required(VERSION 2.8.0)

project(gui)

add_compile_options(-std=c++14)

find_package(catkin REQUIRED COMPONENTS qt_build roscpp sensor_msgs image_transport)
set(QML_IMPORT_PATH "${QML_IMPORT_PATH};${CATKIN_GLOBAL_LIB_DESTINATION}" )

set(QML_IMPORT_PATH2 "${QML_IMPORT_PATH};${CATKIN_GLOBAL_LIB_DESTINATION}" )
include_directories(${catkin_INCLUDE_DIRS})
include_directories(${Qt5Widgets_INCLUDE_DIRS} ${QtQml_INCLUDE_DIRS})

catkin_package()
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_package(Qt5 COMPONENTS Core Quick Qml Network)

rosbuild_prepare_qt4(QtCore QtGui) # Add the appropriate components to the component list here

file(GLOB QT_FORMS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "ui/*.ui"")
file(GLOB QT_RESOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "resources/*.qrc"")
file(GLOB_RECURSE QT_MOC RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} FOLLOW_SYMLINKS "include/gui/*.hpp")

QT5_ADD_RESOURCES(QT_RESOURCES_CPP ${QT_RESOURCES})
#QT5_WRAP_UI(QT_FORMS_HPP ${QT_FORMS})

include_directories(
    ${Qt5Core_INCLUDE_DIRS}
    #${Qt5Gui_INCLUDE_DIRS}
    #${Qt5Widgets_INCLUDE_DIRS}
    ${Qt5Quick_INCLUDE_DIRS}
    ${Qt5Widgets_INCLUDE_DIRS}
    )

file(GLOB_RECURSE QT_SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} FOLLOW_SYMLINKS "src/*.cpp")

add_executable(gui ${QT_SOURCES} ${QT_RESOURCES_CPP} ${QT_FORMS} ${QT_MOC_HPP})
target_link_libraries(gui Qt5::Core Qt5::Qml ${QT_LIBRARIES} ${catkin_LIBRARIES})
install(TARGETS gui RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

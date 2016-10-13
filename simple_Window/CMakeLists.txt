cmake_minimum_required(VERSION 3.2)

set(PROJECT_NAME "simpleWindow")
#set(LIB_NAME "ForryAssetLoader")
set(APP_NAME "simpleWindow")

set( CMAKE_AUTORCC ON )
set( CMAKE_AUTOUIC ON )
set( CMAKE_AUTOMOC ON )

SET(CMAKE_DEBUG_POSTFIX "d" CACHE STRING "add a postfix, usually d on windows")
SET(CMAKE_RELEASE_POSTFIX "" CACHE STRING "add a postfix, usually empty on windows")
SET(CMAKE_RELWITHDEBINFO_POSTFIX "rd" CACHE STRING "add a postfix, usually empty on windows")
SET(CMAKE_MINSIZEREL_POSTFIX "s" CACHE STRING "add a postfix, usually empty on windows")

project(${PROJECT_NAME})

find_package(Qt5 COMPONENTS Quick)

set(QML_RES "" CACHE STRING "Relative or absolute path to QML resources.")
set(APP_RES "" CACHE STRING "Relative or absolute path to Application resources.")

file(GLOB SRC_FILES src/*.cpp src/*.h)

add_executable(${APP_NAME} WIN32 ${SRC_FILES})
target_link_libraries(${APP_NAME} Qt5::Quick)
target_include_directories(${APP_NAME} PUBLIC "src/")
set_target_properties(${APP_NAME} PROPERTIES COMPILE_DEFINITIONS "QML_RESOURCE_PATH=\"${QML_RES}\";APP_RESOURCES=\"${APP_RES}\"")

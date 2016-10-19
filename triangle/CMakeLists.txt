cmake_minimum_required(VERSION 3.2)

set(PROJECT_NAME "triangle")
#set(LIB_NAME "ForryAssetLoader")
set(APP_NAME "triangle")

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)

project(${PROJECT_NAME})

find_package(Qt5Widgets)
find_package(Qt5Quick)

file(GLOB SRC_FILES src/*.cpp src/*.h)

#add_executable(${APP_NAME} WIN32 ${SRC_FILES})

add_executable(${APP_NAME} ${SRC_FILES}) 
target_link_libraries(${APP_NAME} Qt5::Widgets)
target_link_libraries(${APP_NAME} Qt5::Quick)
target_include_directories(${APP_NAME} PUBLIC "src/")
#set_target_properties(${APP_NAME} PROPERTIES COMPILE_DEFINITIONS "QML_RESOURCE_PATH=\"${QML_RES}\";APP_RESOURCES=\"${APP_RES}\"")

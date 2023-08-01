cmake_minimum_required(VERSION 3.20)

project(iambird)

set(HEADERS_DIR "${PROJECT_SOURCE_DIR}/include")
set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")
set(SOURCES
  ${SRC_DIR}/main.cpp
  ${SRC_DIR}/Barriers.cpp
  ${SRC_DIR}/Flappy_bird.cpp
  ${SRC_DIR}/Generation.cpp
  ${SRC_DIR}/MyGraphic.cpp
  ${SRC_DIR}/Network.cpp
  ${SRC_DIR}/Pipe.cpp
  ${SRC_DIR}/Scoreboard.cpp
)

find_package(SFML COMPONENTS window graphics system)

add_executable(iambird ${SOURCES})

target_include_directories(iambird
  PRIVATE
    ${PROJECT_BINARY_DIR}
    ${HEADERS_DIR})

set_target_properties(iambird
  PROPERTIES
    INSTALL_RPATH_USE_LINK_PATH TRUE)

target_link_libraries(iambird sfml-graphics)
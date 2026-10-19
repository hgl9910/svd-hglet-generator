cmake_minimum_required(VERSION 3.10)
project(svd_generator CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(TinyXML2 REQUIRED)

add_executable(generator
  src/main.cpp
  src/parser.cpp
  src/generator.cpp
)

target_include_directories(generator PRIVATE ${TINYXML2_INCLUDE_DIRS})
target_link_libraries(generator PRIVATE ${TINYXML2_LIBRARIES})

cmake_minimum_required(VERSION 3.5)

project(brents_algo LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core LinguistTools REQUIRED)

set(TS_FILES brents_algo_en_CA.ts)

add_executable(brents_algo
  main.cpp
  ${TS_FILES}
)
target_link_libraries(brents_algo Qt5::Core)

qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
target_include_directories(brents_algo PUBLIC "/Users/desiree/Desktop/MITACS/eigen-3.3.7")
target_include_directories(brents_algo PUBLIC "/usr/local/Cellar/boost/1.73.0/include")

cmake_minimum_required (VERSION 3.8)
set(PROJECT_NAME Perceptron)
project(${PROJECT_NAME})
set(CMAKE_CXX_STANDARD 20)
set(SOURCES
        Matrix/Matrix.cpp
        NetWork/NetWork.cpp
        ReadingData/ReadingData.cpp
        Perceptron/Perceptron.cpp
)
set(HEADERS
        Matrix/Matrix.h
        NetWork/NetWork.h
        ReadingData/ReadingData.h
)
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

target_include_directories(${PROJECT_NAME} PUBLIC Matrix)
target_include_directories(${PROJECT_NAME} PUBLIC NetWork)
target_include_directories(${PROJECT_NAME} PUBLIC ReadingData)

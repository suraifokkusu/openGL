cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 20)

set(PROJECT_NAME "app")

project(${PROJECT_NAME})

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

add_executable(${PROJECT_NAME}  src/main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE OpenGL::GL OpenGL::GLU GLUT::GLUT)

#sudo apt-get install freeglut3 freeglut3-dev
cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 20)
project(app)

include(FetchContent)
FetchContent_Declare(
    glut
    GIT_REPOSITORY https://github.com/markkilgard/glut
)

FetchContent_MakeAvailable(glut)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

add_executable(${PROJECT_NAME} spider.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE glut OpenGL::GL OpenGL::GLU GLUT::GLUT)
#target_link_libraries(${PROJECT_NAME} glut)
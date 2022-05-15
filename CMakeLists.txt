cmake_minimum_required(VERSION 3.16)

project(app)
add_executable(app main.cpp)
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )
target_link_libraries(app PRIVATE OpenGL::GL OpenGL::GLU GLUT::GLUT)
target_compile_features(app PRIVATE cxx_std_20)
# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mikita/progy/C++/OpenGLTest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mikita/progy/C++/OpenGLTest/build

# Include any dependencies generated for this target.
include CMakeFiles/log.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/log.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/log.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/log.dir/flags.make

CMakeFiles/log.dir/spider.cpp.o: CMakeFiles/log.dir/flags.make
CMakeFiles/log.dir/spider.cpp.o: ../spider.cpp
CMakeFiles/log.dir/spider.cpp.o: CMakeFiles/log.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mikita/progy/C++/OpenGLTest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/log.dir/spider.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/log.dir/spider.cpp.o -MF CMakeFiles/log.dir/spider.cpp.o.d -o CMakeFiles/log.dir/spider.cpp.o -c /home/mikita/progy/C++/OpenGLTest/spider.cpp

CMakeFiles/log.dir/spider.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/log.dir/spider.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mikita/progy/C++/OpenGLTest/spider.cpp > CMakeFiles/log.dir/spider.cpp.i

CMakeFiles/log.dir/spider.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/log.dir/spider.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mikita/progy/C++/OpenGLTest/spider.cpp -o CMakeFiles/log.dir/spider.cpp.s

# Object files for target log
log_OBJECTS = \
"CMakeFiles/log.dir/spider.cpp.o"

# External object files for target log
log_EXTERNAL_OBJECTS =

log: CMakeFiles/log.dir/spider.cpp.o
log: CMakeFiles/log.dir/build.make
log: /usr/lib64/libGLU.so
log: /usr/lib64/libGLX.so
log: /usr/lib64/libOpenGL.so
log: CMakeFiles/log.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mikita/progy/C++/OpenGLTest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable log"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/log.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/log.dir/build: log
.PHONY : CMakeFiles/log.dir/build

CMakeFiles/log.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/log.dir/cmake_clean.cmake
.PHONY : CMakeFiles/log.dir/clean

CMakeFiles/log.dir/depend:
	cd /home/mikita/progy/C++/OpenGLTest/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mikita/progy/C++/OpenGLTest /home/mikita/progy/C++/OpenGLTest /home/mikita/progy/C++/OpenGLTest/build /home/mikita/progy/C++/OpenGLTest/build /home/mikita/progy/C++/OpenGLTest/build/CMakeFiles/log.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/log.dir/depend


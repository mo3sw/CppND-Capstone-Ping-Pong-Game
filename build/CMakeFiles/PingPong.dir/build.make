# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/workspace/CppND-Capstone-Ping-Pong-Game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/workspace/CppND-Capstone-Ping-Pong-Game/build

# Include any dependencies generated for this target.
include CMakeFiles/PingPong.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PingPong.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PingPong.dir/flags.make

CMakeFiles/PingPong.dir/src/main.cpp.o: CMakeFiles/PingPong.dir/flags.make
CMakeFiles/PingPong.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/workspace/CppND-Capstone-Ping-Pong-Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PingPong.dir/src/main.cpp.o"
	/usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PingPong.dir/src/main.cpp.o -c /home/workspace/CppND-Capstone-Ping-Pong-Game/src/main.cpp

CMakeFiles/PingPong.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PingPong.dir/src/main.cpp.i"
	/usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/workspace/CppND-Capstone-Ping-Pong-Game/src/main.cpp > CMakeFiles/PingPong.dir/src/main.cpp.i

CMakeFiles/PingPong.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PingPong.dir/src/main.cpp.s"
	/usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/workspace/CppND-Capstone-Ping-Pong-Game/src/main.cpp -o CMakeFiles/PingPong.dir/src/main.cpp.s

# Object files for target PingPong
PingPong_OBJECTS = \
"CMakeFiles/PingPong.dir/src/main.cpp.o"

# External object files for target PingPong
PingPong_EXTERNAL_OBJECTS =

PingPong: CMakeFiles/PingPong.dir/src/main.cpp.o
PingPong: CMakeFiles/PingPong.dir/build.make
PingPong: CMakeFiles/PingPong.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/workspace/CppND-Capstone-Ping-Pong-Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PingPong"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PingPong.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PingPong.dir/build: PingPong

.PHONY : CMakeFiles/PingPong.dir/build

CMakeFiles/PingPong.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PingPong.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PingPong.dir/clean

CMakeFiles/PingPong.dir/depend:
	cd /home/workspace/CppND-Capstone-Ping-Pong-Game/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/workspace/CppND-Capstone-Ping-Pong-Game /home/workspace/CppND-Capstone-Ping-Pong-Game /home/workspace/CppND-Capstone-Ping-Pong-Game/build /home/workspace/CppND-Capstone-Ping-Pong-Game/build /home/workspace/CppND-Capstone-Ping-Pong-Game/build/CMakeFiles/PingPong.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PingPong.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/d/Development/CS163/program2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/Development/CS163/program2/cmake-build-debug-coverage

# Include any dependencies generated for this target.
include CMakeFiles/program2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/program2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/program2.dir/flags.make

CMakeFiles/program2.dir/main.cpp.o: CMakeFiles/program2.dir/flags.make
CMakeFiles/program2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Development/CS163/program2/cmake-build-debug-coverage/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/program2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/program2.dir/main.cpp.o -c /mnt/d/Development/CS163/program2/main.cpp

CMakeFiles/program2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/program2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/Development/CS163/program2/main.cpp > CMakeFiles/program2.dir/main.cpp.i

CMakeFiles/program2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/program2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/Development/CS163/program2/main.cpp -o CMakeFiles/program2.dir/main.cpp.s

CMakeFiles/program2.dir/shopping.cpp.o: CMakeFiles/program2.dir/flags.make
CMakeFiles/program2.dir/shopping.cpp.o: ../shopping.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Development/CS163/program2/cmake-build-debug-coverage/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/program2.dir/shopping.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/program2.dir/shopping.cpp.o -c /mnt/d/Development/CS163/program2/shopping.cpp

CMakeFiles/program2.dir/shopping.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/program2.dir/shopping.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/Development/CS163/program2/shopping.cpp > CMakeFiles/program2.dir/shopping.cpp.i

CMakeFiles/program2.dir/shopping.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/program2.dir/shopping.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/Development/CS163/program2/shopping.cpp -o CMakeFiles/program2.dir/shopping.cpp.s

# Object files for target program2
program2_OBJECTS = \
"CMakeFiles/program2.dir/main.cpp.o" \
"CMakeFiles/program2.dir/shopping.cpp.o"

# External object files for target program2
program2_EXTERNAL_OBJECTS =

program2: CMakeFiles/program2.dir/main.cpp.o
program2: CMakeFiles/program2.dir/shopping.cpp.o
program2: CMakeFiles/program2.dir/build.make
program2: CMakeFiles/program2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/Development/CS163/program2/cmake-build-debug-coverage/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable program2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/program2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/program2.dir/build: program2

.PHONY : CMakeFiles/program2.dir/build

CMakeFiles/program2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/program2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/program2.dir/clean

CMakeFiles/program2.dir/depend:
	cd /mnt/d/Development/CS163/program2/cmake-build-debug-coverage && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/Development/CS163/program2 /mnt/d/Development/CS163/program2 /mnt/d/Development/CS163/program2/cmake-build-debug-coverage /mnt/d/Development/CS163/program2/cmake-build-debug-coverage /mnt/d/Development/CS163/program2/cmake-build-debug-coverage/CMakeFiles/program2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/program2.dir/depend


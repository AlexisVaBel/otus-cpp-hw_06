# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/lebllex/workspace/cpp/otus/hw_06

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lebllex/workspace/cpp/otus/hw_06/build

# Include any dependencies generated for this target.
include CMakeFiles/bulk.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bulk.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bulk.dir/flags.make

CMakeFiles/bulk.dir/main.cpp.o: CMakeFiles/bulk.dir/flags.make
CMakeFiles/bulk.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lebllex/workspace/cpp/otus/hw_06/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bulk.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bulk.dir/main.cpp.o -c /home/lebllex/workspace/cpp/otus/hw_06/main.cpp

CMakeFiles/bulk.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bulk.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lebllex/workspace/cpp/otus/hw_06/main.cpp > CMakeFiles/bulk.dir/main.cpp.i

CMakeFiles/bulk.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bulk.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lebllex/workspace/cpp/otus/hw_06/main.cpp -o CMakeFiles/bulk.dir/main.cpp.s

CMakeFiles/bulk.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/bulk.dir/main.cpp.o.requires

CMakeFiles/bulk.dir/main.cpp.o.provides: CMakeFiles/bulk.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/bulk.dir/build.make CMakeFiles/bulk.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/bulk.dir/main.cpp.o.provides

CMakeFiles/bulk.dir/main.cpp.o.provides.build: CMakeFiles/bulk.dir/main.cpp.o


# Object files for target bulk
bulk_OBJECTS = \
"CMakeFiles/bulk.dir/main.cpp.o"

# External object files for target bulk
bulk_EXTERNAL_OBJECTS =

bulk: CMakeFiles/bulk.dir/main.cpp.o
bulk: CMakeFiles/bulk.dir/build.make
bulk: CMakeFiles/bulk.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lebllex/workspace/cpp/otus/hw_06/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bulk"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bulk.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bulk.dir/build: bulk

.PHONY : CMakeFiles/bulk.dir/build

CMakeFiles/bulk.dir/requires: CMakeFiles/bulk.dir/main.cpp.o.requires

.PHONY : CMakeFiles/bulk.dir/requires

CMakeFiles/bulk.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bulk.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bulk.dir/clean

CMakeFiles/bulk.dir/depend:
	cd /home/lebllex/workspace/cpp/otus/hw_06/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lebllex/workspace/cpp/otus/hw_06 /home/lebllex/workspace/cpp/otus/hw_06 /home/lebllex/workspace/cpp/otus/hw_06/build /home/lebllex/workspace/cpp/otus/hw_06/build /home/lebllex/workspace/cpp/otus/hw_06/build/CMakeFiles/bulk.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bulk.dir/depend


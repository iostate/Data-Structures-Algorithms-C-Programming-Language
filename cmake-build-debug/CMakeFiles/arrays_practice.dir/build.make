# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/qmtruong92/Documents/git/csc240/c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/qmtruong92/Documents/git/csc240/c/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/arrays_practice.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/arrays_practice.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/arrays_practice.dir/flags.make

CMakeFiles/arrays_practice.dir/CPractice/arrays_practice.c.o: CMakeFiles/arrays_practice.dir/flags.make
CMakeFiles/arrays_practice.dir/CPractice/arrays_practice.c.o: ../CPractice/arrays_practice.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qmtruong92/Documents/git/csc240/c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/arrays_practice.dir/CPractice/arrays_practice.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/arrays_practice.dir/CPractice/arrays_practice.c.o   -c /Users/qmtruong92/Documents/git/csc240/c/CPractice/arrays_practice.c

CMakeFiles/arrays_practice.dir/CPractice/arrays_practice.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/arrays_practice.dir/CPractice/arrays_practice.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/qmtruong92/Documents/git/csc240/c/CPractice/arrays_practice.c > CMakeFiles/arrays_practice.dir/CPractice/arrays_practice.c.i

CMakeFiles/arrays_practice.dir/CPractice/arrays_practice.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/arrays_practice.dir/CPractice/arrays_practice.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/qmtruong92/Documents/git/csc240/c/CPractice/arrays_practice.c -o CMakeFiles/arrays_practice.dir/CPractice/arrays_practice.c.s

CMakeFiles/arrays_practice.dir/CPractice/arrays_practice.c.o.requires:

.PHONY : CMakeFiles/arrays_practice.dir/CPractice/arrays_practice.c.o.requires

CMakeFiles/arrays_practice.dir/CPractice/arrays_practice.c.o.provides: CMakeFiles/arrays_practice.dir/CPractice/arrays_practice.c.o.requires
	$(MAKE) -f CMakeFiles/arrays_practice.dir/build.make CMakeFiles/arrays_practice.dir/CPractice/arrays_practice.c.o.provides.build
.PHONY : CMakeFiles/arrays_practice.dir/CPractice/arrays_practice.c.o.provides

CMakeFiles/arrays_practice.dir/CPractice/arrays_practice.c.o.provides.build: CMakeFiles/arrays_practice.dir/CPractice/arrays_practice.c.o


# Object files for target arrays_practice
arrays_practice_OBJECTS = \
"CMakeFiles/arrays_practice.dir/CPractice/arrays_practice.c.o"

# External object files for target arrays_practice
arrays_practice_EXTERNAL_OBJECTS =

arrays_practice: CMakeFiles/arrays_practice.dir/CPractice/arrays_practice.c.o
arrays_practice: CMakeFiles/arrays_practice.dir/build.make
arrays_practice: CMakeFiles/arrays_practice.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/qmtruong92/Documents/git/csc240/c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable arrays_practice"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/arrays_practice.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/arrays_practice.dir/build: arrays_practice

.PHONY : CMakeFiles/arrays_practice.dir/build

CMakeFiles/arrays_practice.dir/requires: CMakeFiles/arrays_practice.dir/CPractice/arrays_practice.c.o.requires

.PHONY : CMakeFiles/arrays_practice.dir/requires

CMakeFiles/arrays_practice.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/arrays_practice.dir/cmake_clean.cmake
.PHONY : CMakeFiles/arrays_practice.dir/clean

CMakeFiles/arrays_practice.dir/depend:
	cd /Users/qmtruong92/Documents/git/csc240/c/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/qmtruong92/Documents/git/csc240/c /Users/qmtruong92/Documents/git/csc240/c /Users/qmtruong92/Documents/git/csc240/c/cmake-build-debug /Users/qmtruong92/Documents/git/csc240/c/cmake-build-debug /Users/qmtruong92/Documents/git/csc240/c/cmake-build-debug/CMakeFiles/arrays_practice.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/arrays_practice.dir/depend

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
include CMakeFiles/Conditionals.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Conditionals.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Conditionals.dir/flags.make

CMakeFiles/Conditionals.dir/CPractice/Conditionals.c.o: CMakeFiles/Conditionals.dir/flags.make
CMakeFiles/Conditionals.dir/CPractice/Conditionals.c.o: ../CPractice/Conditionals.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qmtruong92/Documents/git/csc240/c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Conditionals.dir/CPractice/Conditionals.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Conditionals.dir/CPractice/Conditionals.c.o   -c /Users/qmtruong92/Documents/git/csc240/c/CPractice/Conditionals.c

CMakeFiles/Conditionals.dir/CPractice/Conditionals.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Conditionals.dir/CPractice/Conditionals.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/qmtruong92/Documents/git/csc240/c/CPractice/Conditionals.c > CMakeFiles/Conditionals.dir/CPractice/Conditionals.c.i

CMakeFiles/Conditionals.dir/CPractice/Conditionals.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Conditionals.dir/CPractice/Conditionals.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/qmtruong92/Documents/git/csc240/c/CPractice/Conditionals.c -o CMakeFiles/Conditionals.dir/CPractice/Conditionals.c.s

CMakeFiles/Conditionals.dir/CPractice/Conditionals.c.o.requires:

.PHONY : CMakeFiles/Conditionals.dir/CPractice/Conditionals.c.o.requires

CMakeFiles/Conditionals.dir/CPractice/Conditionals.c.o.provides: CMakeFiles/Conditionals.dir/CPractice/Conditionals.c.o.requires
	$(MAKE) -f CMakeFiles/Conditionals.dir/build.make CMakeFiles/Conditionals.dir/CPractice/Conditionals.c.o.provides.build
.PHONY : CMakeFiles/Conditionals.dir/CPractice/Conditionals.c.o.provides

CMakeFiles/Conditionals.dir/CPractice/Conditionals.c.o.provides.build: CMakeFiles/Conditionals.dir/CPractice/Conditionals.c.o


# Object files for target Conditionals
Conditionals_OBJECTS = \
"CMakeFiles/Conditionals.dir/CPractice/Conditionals.c.o"

# External object files for target Conditionals
Conditionals_EXTERNAL_OBJECTS =

Conditionals: CMakeFiles/Conditionals.dir/CPractice/Conditionals.c.o
Conditionals: CMakeFiles/Conditionals.dir/build.make
Conditionals: CMakeFiles/Conditionals.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/qmtruong92/Documents/git/csc240/c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Conditionals"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Conditionals.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Conditionals.dir/build: Conditionals

.PHONY : CMakeFiles/Conditionals.dir/build

CMakeFiles/Conditionals.dir/requires: CMakeFiles/Conditionals.dir/CPractice/Conditionals.c.o.requires

.PHONY : CMakeFiles/Conditionals.dir/requires

CMakeFiles/Conditionals.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Conditionals.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Conditionals.dir/clean

CMakeFiles/Conditionals.dir/depend:
	cd /Users/qmtruong92/Documents/git/csc240/c/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/qmtruong92/Documents/git/csc240/c /Users/qmtruong92/Documents/git/csc240/c /Users/qmtruong92/Documents/git/csc240/c/cmake-build-debug /Users/qmtruong92/Documents/git/csc240/c/cmake-build-debug /Users/qmtruong92/Documents/git/csc240/c/cmake-build-debug/CMakeFiles/Conditionals.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Conditionals.dir/depend

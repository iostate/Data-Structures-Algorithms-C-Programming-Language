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
include CMakeFiles/RunHisShit.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RunHisShit.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RunHisShit.dir/flags.make

CMakeFiles/RunHisShit.dir/David/RunHisShit.c.o: CMakeFiles/RunHisShit.dir/flags.make
CMakeFiles/RunHisShit.dir/David/RunHisShit.c.o: ../David/RunHisShit.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qmtruong92/Documents/git/csc240/c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/RunHisShit.dir/David/RunHisShit.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/RunHisShit.dir/David/RunHisShit.c.o   -c /Users/qmtruong92/Documents/git/csc240/c/David/RunHisShit.c

CMakeFiles/RunHisShit.dir/David/RunHisShit.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/RunHisShit.dir/David/RunHisShit.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/qmtruong92/Documents/git/csc240/c/David/RunHisShit.c > CMakeFiles/RunHisShit.dir/David/RunHisShit.c.i

CMakeFiles/RunHisShit.dir/David/RunHisShit.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/RunHisShit.dir/David/RunHisShit.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/qmtruong92/Documents/git/csc240/c/David/RunHisShit.c -o CMakeFiles/RunHisShit.dir/David/RunHisShit.c.s

CMakeFiles/RunHisShit.dir/David/RunHisShit.c.o.requires:

.PHONY : CMakeFiles/RunHisShit.dir/David/RunHisShit.c.o.requires

CMakeFiles/RunHisShit.dir/David/RunHisShit.c.o.provides: CMakeFiles/RunHisShit.dir/David/RunHisShit.c.o.requires
	$(MAKE) -f CMakeFiles/RunHisShit.dir/build.make CMakeFiles/RunHisShit.dir/David/RunHisShit.c.o.provides.build
.PHONY : CMakeFiles/RunHisShit.dir/David/RunHisShit.c.o.provides

CMakeFiles/RunHisShit.dir/David/RunHisShit.c.o.provides.build: CMakeFiles/RunHisShit.dir/David/RunHisShit.c.o


# Object files for target RunHisShit
RunHisShit_OBJECTS = \
"CMakeFiles/RunHisShit.dir/David/RunHisShit.c.o"

# External object files for target RunHisShit
RunHisShit_EXTERNAL_OBJECTS =

RunHisShit: CMakeFiles/RunHisShit.dir/David/RunHisShit.c.o
RunHisShit: CMakeFiles/RunHisShit.dir/build.make
RunHisShit: CMakeFiles/RunHisShit.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/qmtruong92/Documents/git/csc240/c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable RunHisShit"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RunHisShit.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RunHisShit.dir/build: RunHisShit

.PHONY : CMakeFiles/RunHisShit.dir/build

CMakeFiles/RunHisShit.dir/requires: CMakeFiles/RunHisShit.dir/David/RunHisShit.c.o.requires

.PHONY : CMakeFiles/RunHisShit.dir/requires

CMakeFiles/RunHisShit.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RunHisShit.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RunHisShit.dir/clean

CMakeFiles/RunHisShit.dir/depend:
	cd /Users/qmtruong92/Documents/git/csc240/c/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/qmtruong92/Documents/git/csc240/c /Users/qmtruong92/Documents/git/csc240/c /Users/qmtruong92/Documents/git/csc240/c/cmake-build-debug /Users/qmtruong92/Documents/git/csc240/c/cmake-build-debug /Users/qmtruong92/Documents/git/csc240/c/cmake-build-debug/CMakeFiles/RunHisShit.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RunHisShit.dir/depend

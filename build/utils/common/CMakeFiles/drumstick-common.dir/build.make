# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

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
CMAKE_SOURCE_DIR = /home/ole/testg/drumstick-1.0.2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ole/testg/drumstick-1.0.2/build

# Include any dependencies generated for this target.
include utils/common/CMakeFiles/drumstick-common.dir/depend.make

# Include the progress variables for this target.
include utils/common/CMakeFiles/drumstick-common.dir/progress.make

# Include the compile flags for this target's objects.
include utils/common/CMakeFiles/drumstick-common.dir/flags.make

utils/common/CMakeFiles/drumstick-common.dir/cmdlineargs.cpp.o: utils/common/CMakeFiles/drumstick-common.dir/flags.make
utils/common/CMakeFiles/drumstick-common.dir/cmdlineargs.cpp.o: ../utils/common/cmdlineargs.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ole/testg/drumstick-1.0.2/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object utils/common/CMakeFiles/drumstick-common.dir/cmdlineargs.cpp.o"
	cd /home/ole/testg/drumstick-1.0.2/build/utils/common && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/drumstick-common.dir/cmdlineargs.cpp.o -c /home/ole/testg/drumstick-1.0.2/utils/common/cmdlineargs.cpp

utils/common/CMakeFiles/drumstick-common.dir/cmdlineargs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/drumstick-common.dir/cmdlineargs.cpp.i"
	cd /home/ole/testg/drumstick-1.0.2/build/utils/common && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ole/testg/drumstick-1.0.2/utils/common/cmdlineargs.cpp > CMakeFiles/drumstick-common.dir/cmdlineargs.cpp.i

utils/common/CMakeFiles/drumstick-common.dir/cmdlineargs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/drumstick-common.dir/cmdlineargs.cpp.s"
	cd /home/ole/testg/drumstick-1.0.2/build/utils/common && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ole/testg/drumstick-1.0.2/utils/common/cmdlineargs.cpp -o CMakeFiles/drumstick-common.dir/cmdlineargs.cpp.s

utils/common/CMakeFiles/drumstick-common.dir/cmdlineargs.cpp.o.requires:
.PHONY : utils/common/CMakeFiles/drumstick-common.dir/cmdlineargs.cpp.o.requires

utils/common/CMakeFiles/drumstick-common.dir/cmdlineargs.cpp.o.provides: utils/common/CMakeFiles/drumstick-common.dir/cmdlineargs.cpp.o.requires
	$(MAKE) -f utils/common/CMakeFiles/drumstick-common.dir/build.make utils/common/CMakeFiles/drumstick-common.dir/cmdlineargs.cpp.o.provides.build
.PHONY : utils/common/CMakeFiles/drumstick-common.dir/cmdlineargs.cpp.o.provides

utils/common/CMakeFiles/drumstick-common.dir/cmdlineargs.cpp.o.provides.build: utils/common/CMakeFiles/drumstick-common.dir/cmdlineargs.cpp.o

# Object files for target drumstick-common
drumstick__common_OBJECTS = \
"CMakeFiles/drumstick-common.dir/cmdlineargs.cpp.o"

# External object files for target drumstick-common
drumstick__common_EXTERNAL_OBJECTS =

lib/libdrumstick-common.a: utils/common/CMakeFiles/drumstick-common.dir/cmdlineargs.cpp.o
lib/libdrumstick-common.a: utils/common/CMakeFiles/drumstick-common.dir/build.make
lib/libdrumstick-common.a: utils/common/CMakeFiles/drumstick-common.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library ../../lib/libdrumstick-common.a"
	cd /home/ole/testg/drumstick-1.0.2/build/utils/common && $(CMAKE_COMMAND) -P CMakeFiles/drumstick-common.dir/cmake_clean_target.cmake
	cd /home/ole/testg/drumstick-1.0.2/build/utils/common && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/drumstick-common.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
utils/common/CMakeFiles/drumstick-common.dir/build: lib/libdrumstick-common.a
.PHONY : utils/common/CMakeFiles/drumstick-common.dir/build

utils/common/CMakeFiles/drumstick-common.dir/requires: utils/common/CMakeFiles/drumstick-common.dir/cmdlineargs.cpp.o.requires
.PHONY : utils/common/CMakeFiles/drumstick-common.dir/requires

utils/common/CMakeFiles/drumstick-common.dir/clean:
	cd /home/ole/testg/drumstick-1.0.2/build/utils/common && $(CMAKE_COMMAND) -P CMakeFiles/drumstick-common.dir/cmake_clean.cmake
.PHONY : utils/common/CMakeFiles/drumstick-common.dir/clean

utils/common/CMakeFiles/drumstick-common.dir/depend:
	cd /home/ole/testg/drumstick-1.0.2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ole/testg/drumstick-1.0.2 /home/ole/testg/drumstick-1.0.2/utils/common /home/ole/testg/drumstick-1.0.2/build /home/ole/testg/drumstick-1.0.2/build/utils/common /home/ole/testg/drumstick-1.0.2/build/utils/common/CMakeFiles/drumstick-common.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : utils/common/CMakeFiles/drumstick-common.dir/depend


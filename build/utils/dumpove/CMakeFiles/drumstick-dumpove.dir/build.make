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
include utils/dumpove/CMakeFiles/drumstick-dumpove.dir/depend.make

# Include the progress variables for this target.
include utils/dumpove/CMakeFiles/drumstick-dumpove.dir/progress.make

# Include the compile flags for this target's objects.
include utils/dumpove/CMakeFiles/drumstick-dumpove.dir/flags.make

utils/dumpove/moc_dumpove.cpp: ../utils/dumpove/dumpove.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ole/testg/drumstick-1.0.2/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_dumpove.cpp"
	cd /home/ole/testg/drumstick-1.0.2/build/utils/dumpove && /home/ole/Qt5.5.0/5.5/gcc_64/bin/moc @/home/ole/testg/drumstick-1.0.2/build/utils/dumpove/moc_dumpove.cpp_parameters

utils/dumpove/CMakeFiles/drumstick-dumpove.dir/moc_dumpove.cpp.o: utils/dumpove/CMakeFiles/drumstick-dumpove.dir/flags.make
utils/dumpove/CMakeFiles/drumstick-dumpove.dir/moc_dumpove.cpp.o: utils/dumpove/moc_dumpove.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ole/testg/drumstick-1.0.2/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object utils/dumpove/CMakeFiles/drumstick-dumpove.dir/moc_dumpove.cpp.o"
	cd /home/ole/testg/drumstick-1.0.2/build/utils/dumpove && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/drumstick-dumpove.dir/moc_dumpove.cpp.o -c /home/ole/testg/drumstick-1.0.2/build/utils/dumpove/moc_dumpove.cpp

utils/dumpove/CMakeFiles/drumstick-dumpove.dir/moc_dumpove.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/drumstick-dumpove.dir/moc_dumpove.cpp.i"
	cd /home/ole/testg/drumstick-1.0.2/build/utils/dumpove && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ole/testg/drumstick-1.0.2/build/utils/dumpove/moc_dumpove.cpp > CMakeFiles/drumstick-dumpove.dir/moc_dumpove.cpp.i

utils/dumpove/CMakeFiles/drumstick-dumpove.dir/moc_dumpove.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/drumstick-dumpove.dir/moc_dumpove.cpp.s"
	cd /home/ole/testg/drumstick-1.0.2/build/utils/dumpove && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ole/testg/drumstick-1.0.2/build/utils/dumpove/moc_dumpove.cpp -o CMakeFiles/drumstick-dumpove.dir/moc_dumpove.cpp.s

utils/dumpove/CMakeFiles/drumstick-dumpove.dir/moc_dumpove.cpp.o.requires:
.PHONY : utils/dumpove/CMakeFiles/drumstick-dumpove.dir/moc_dumpove.cpp.o.requires

utils/dumpove/CMakeFiles/drumstick-dumpove.dir/moc_dumpove.cpp.o.provides: utils/dumpove/CMakeFiles/drumstick-dumpove.dir/moc_dumpove.cpp.o.requires
	$(MAKE) -f utils/dumpove/CMakeFiles/drumstick-dumpove.dir/build.make utils/dumpove/CMakeFiles/drumstick-dumpove.dir/moc_dumpove.cpp.o.provides.build
.PHONY : utils/dumpove/CMakeFiles/drumstick-dumpove.dir/moc_dumpove.cpp.o.provides

utils/dumpove/CMakeFiles/drumstick-dumpove.dir/moc_dumpove.cpp.o.provides.build: utils/dumpove/CMakeFiles/drumstick-dumpove.dir/moc_dumpove.cpp.o

utils/dumpove/CMakeFiles/drumstick-dumpove.dir/dumpove.cpp.o: utils/dumpove/CMakeFiles/drumstick-dumpove.dir/flags.make
utils/dumpove/CMakeFiles/drumstick-dumpove.dir/dumpove.cpp.o: ../utils/dumpove/dumpove.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ole/testg/drumstick-1.0.2/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object utils/dumpove/CMakeFiles/drumstick-dumpove.dir/dumpove.cpp.o"
	cd /home/ole/testg/drumstick-1.0.2/build/utils/dumpove && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/drumstick-dumpove.dir/dumpove.cpp.o -c /home/ole/testg/drumstick-1.0.2/utils/dumpove/dumpove.cpp

utils/dumpove/CMakeFiles/drumstick-dumpove.dir/dumpove.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/drumstick-dumpove.dir/dumpove.cpp.i"
	cd /home/ole/testg/drumstick-1.0.2/build/utils/dumpove && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ole/testg/drumstick-1.0.2/utils/dumpove/dumpove.cpp > CMakeFiles/drumstick-dumpove.dir/dumpove.cpp.i

utils/dumpove/CMakeFiles/drumstick-dumpove.dir/dumpove.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/drumstick-dumpove.dir/dumpove.cpp.s"
	cd /home/ole/testg/drumstick-1.0.2/build/utils/dumpove && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ole/testg/drumstick-1.0.2/utils/dumpove/dumpove.cpp -o CMakeFiles/drumstick-dumpove.dir/dumpove.cpp.s

utils/dumpove/CMakeFiles/drumstick-dumpove.dir/dumpove.cpp.o.requires:
.PHONY : utils/dumpove/CMakeFiles/drumstick-dumpove.dir/dumpove.cpp.o.requires

utils/dumpove/CMakeFiles/drumstick-dumpove.dir/dumpove.cpp.o.provides: utils/dumpove/CMakeFiles/drumstick-dumpove.dir/dumpove.cpp.o.requires
	$(MAKE) -f utils/dumpove/CMakeFiles/drumstick-dumpove.dir/build.make utils/dumpove/CMakeFiles/drumstick-dumpove.dir/dumpove.cpp.o.provides.build
.PHONY : utils/dumpove/CMakeFiles/drumstick-dumpove.dir/dumpove.cpp.o.provides

utils/dumpove/CMakeFiles/drumstick-dumpove.dir/dumpove.cpp.o.provides.build: utils/dumpove/CMakeFiles/drumstick-dumpove.dir/dumpove.cpp.o

# Object files for target drumstick-dumpove
drumstick__dumpove_OBJECTS = \
"CMakeFiles/drumstick-dumpove.dir/moc_dumpove.cpp.o" \
"CMakeFiles/drumstick-dumpove.dir/dumpove.cpp.o"

# External object files for target drumstick-dumpove
drumstick__dumpove_EXTERNAL_OBJECTS =

bin/drumstick-dumpove: utils/dumpove/CMakeFiles/drumstick-dumpove.dir/moc_dumpove.cpp.o
bin/drumstick-dumpove: utils/dumpove/CMakeFiles/drumstick-dumpove.dir/dumpove.cpp.o
bin/drumstick-dumpove: utils/dumpove/CMakeFiles/drumstick-dumpove.dir/build.make
bin/drumstick-dumpove: lib/libdrumstick-common.a
bin/drumstick-dumpove: lib/libdrumstick-file.so.1.0.2
bin/drumstick-dumpove: /home/ole/Qt5.5.0/5.5/gcc_64/lib/libQt5Core.so.5.5.0
bin/drumstick-dumpove: utils/dumpove/CMakeFiles/drumstick-dumpove.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/drumstick-dumpove"
	cd /home/ole/testg/drumstick-1.0.2/build/utils/dumpove && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/drumstick-dumpove.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
utils/dumpove/CMakeFiles/drumstick-dumpove.dir/build: bin/drumstick-dumpove
.PHONY : utils/dumpove/CMakeFiles/drumstick-dumpove.dir/build

utils/dumpove/CMakeFiles/drumstick-dumpove.dir/requires: utils/dumpove/CMakeFiles/drumstick-dumpove.dir/moc_dumpove.cpp.o.requires
utils/dumpove/CMakeFiles/drumstick-dumpove.dir/requires: utils/dumpove/CMakeFiles/drumstick-dumpove.dir/dumpove.cpp.o.requires
.PHONY : utils/dumpove/CMakeFiles/drumstick-dumpove.dir/requires

utils/dumpove/CMakeFiles/drumstick-dumpove.dir/clean:
	cd /home/ole/testg/drumstick-1.0.2/build/utils/dumpove && $(CMAKE_COMMAND) -P CMakeFiles/drumstick-dumpove.dir/cmake_clean.cmake
.PHONY : utils/dumpove/CMakeFiles/drumstick-dumpove.dir/clean

utils/dumpove/CMakeFiles/drumstick-dumpove.dir/depend: utils/dumpove/moc_dumpove.cpp
	cd /home/ole/testg/drumstick-1.0.2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ole/testg/drumstick-1.0.2 /home/ole/testg/drumstick-1.0.2/utils/dumpove /home/ole/testg/drumstick-1.0.2/build /home/ole/testg/drumstick-1.0.2/build/utils/dumpove /home/ole/testg/drumstick-1.0.2/build/utils/dumpove/CMakeFiles/drumstick-dumpove.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : utils/dumpove/CMakeFiles/drumstick-dumpove.dir/depend

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
include utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/depend.make

# Include the progress variables for this target.
include utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/progress.make

# Include the compile flags for this target's objects.
include utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/flags.make

utils/dumpwrk/moc_dumpwrk.cpp: ../utils/dumpwrk/dumpwrk.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ole/testg/drumstick-1.0.2/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_dumpwrk.cpp"
	cd /home/ole/testg/drumstick-1.0.2/build/utils/dumpwrk && /home/ole/Qt5.5.0/5.5/gcc_64/bin/moc @/home/ole/testg/drumstick-1.0.2/build/utils/dumpwrk/moc_dumpwrk.cpp_parameters

utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/moc_dumpwrk.cpp.o: utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/flags.make
utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/moc_dumpwrk.cpp.o: utils/dumpwrk/moc_dumpwrk.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ole/testg/drumstick-1.0.2/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/moc_dumpwrk.cpp.o"
	cd /home/ole/testg/drumstick-1.0.2/build/utils/dumpwrk && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/drumstick-dumpwrk.dir/moc_dumpwrk.cpp.o -c /home/ole/testg/drumstick-1.0.2/build/utils/dumpwrk/moc_dumpwrk.cpp

utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/moc_dumpwrk.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/drumstick-dumpwrk.dir/moc_dumpwrk.cpp.i"
	cd /home/ole/testg/drumstick-1.0.2/build/utils/dumpwrk && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ole/testg/drumstick-1.0.2/build/utils/dumpwrk/moc_dumpwrk.cpp > CMakeFiles/drumstick-dumpwrk.dir/moc_dumpwrk.cpp.i

utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/moc_dumpwrk.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/drumstick-dumpwrk.dir/moc_dumpwrk.cpp.s"
	cd /home/ole/testg/drumstick-1.0.2/build/utils/dumpwrk && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ole/testg/drumstick-1.0.2/build/utils/dumpwrk/moc_dumpwrk.cpp -o CMakeFiles/drumstick-dumpwrk.dir/moc_dumpwrk.cpp.s

utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/moc_dumpwrk.cpp.o.requires:
.PHONY : utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/moc_dumpwrk.cpp.o.requires

utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/moc_dumpwrk.cpp.o.provides: utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/moc_dumpwrk.cpp.o.requires
	$(MAKE) -f utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/build.make utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/moc_dumpwrk.cpp.o.provides.build
.PHONY : utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/moc_dumpwrk.cpp.o.provides

utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/moc_dumpwrk.cpp.o.provides.build: utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/moc_dumpwrk.cpp.o

utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/dumpwrk.cpp.o: utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/flags.make
utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/dumpwrk.cpp.o: ../utils/dumpwrk/dumpwrk.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ole/testg/drumstick-1.0.2/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/dumpwrk.cpp.o"
	cd /home/ole/testg/drumstick-1.0.2/build/utils/dumpwrk && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/drumstick-dumpwrk.dir/dumpwrk.cpp.o -c /home/ole/testg/drumstick-1.0.2/utils/dumpwrk/dumpwrk.cpp

utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/dumpwrk.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/drumstick-dumpwrk.dir/dumpwrk.cpp.i"
	cd /home/ole/testg/drumstick-1.0.2/build/utils/dumpwrk && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ole/testg/drumstick-1.0.2/utils/dumpwrk/dumpwrk.cpp > CMakeFiles/drumstick-dumpwrk.dir/dumpwrk.cpp.i

utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/dumpwrk.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/drumstick-dumpwrk.dir/dumpwrk.cpp.s"
	cd /home/ole/testg/drumstick-1.0.2/build/utils/dumpwrk && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ole/testg/drumstick-1.0.2/utils/dumpwrk/dumpwrk.cpp -o CMakeFiles/drumstick-dumpwrk.dir/dumpwrk.cpp.s

utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/dumpwrk.cpp.o.requires:
.PHONY : utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/dumpwrk.cpp.o.requires

utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/dumpwrk.cpp.o.provides: utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/dumpwrk.cpp.o.requires
	$(MAKE) -f utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/build.make utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/dumpwrk.cpp.o.provides.build
.PHONY : utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/dumpwrk.cpp.o.provides

utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/dumpwrk.cpp.o.provides.build: utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/dumpwrk.cpp.o

# Object files for target drumstick-dumpwrk
drumstick__dumpwrk_OBJECTS = \
"CMakeFiles/drumstick-dumpwrk.dir/moc_dumpwrk.cpp.o" \
"CMakeFiles/drumstick-dumpwrk.dir/dumpwrk.cpp.o"

# External object files for target drumstick-dumpwrk
drumstick__dumpwrk_EXTERNAL_OBJECTS =

bin/drumstick-dumpwrk: utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/moc_dumpwrk.cpp.o
bin/drumstick-dumpwrk: utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/dumpwrk.cpp.o
bin/drumstick-dumpwrk: utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/build.make
bin/drumstick-dumpwrk: lib/libdrumstick-common.a
bin/drumstick-dumpwrk: lib/libdrumstick-file.so.1.0.2
bin/drumstick-dumpwrk: /home/ole/Qt5.5.0/5.5/gcc_64/lib/libQt5Core.so.5.5.0
bin/drumstick-dumpwrk: utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/drumstick-dumpwrk"
	cd /home/ole/testg/drumstick-1.0.2/build/utils/dumpwrk && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/drumstick-dumpwrk.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/build: bin/drumstick-dumpwrk
.PHONY : utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/build

utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/requires: utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/moc_dumpwrk.cpp.o.requires
utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/requires: utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/dumpwrk.cpp.o.requires
.PHONY : utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/requires

utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/clean:
	cd /home/ole/testg/drumstick-1.0.2/build/utils/dumpwrk && $(CMAKE_COMMAND) -P CMakeFiles/drumstick-dumpwrk.dir/cmake_clean.cmake
.PHONY : utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/clean

utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/depend: utils/dumpwrk/moc_dumpwrk.cpp
	cd /home/ole/testg/drumstick-1.0.2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ole/testg/drumstick-1.0.2 /home/ole/testg/drumstick-1.0.2/utils/dumpwrk /home/ole/testg/drumstick-1.0.2/build /home/ole/testg/drumstick-1.0.2/build/utils/dumpwrk /home/ole/testg/drumstick-1.0.2/build/utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : utils/dumpwrk/CMakeFiles/drumstick-dumpwrk.dir/depend


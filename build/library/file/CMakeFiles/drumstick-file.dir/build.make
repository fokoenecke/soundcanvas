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
include library/file/CMakeFiles/drumstick-file.dir/depend.make

# Include the progress variables for this target.
include library/file/CMakeFiles/drumstick-file.dir/progress.make

# Include the compile flags for this target's objects.
include library/file/CMakeFiles/drumstick-file.dir/flags.make

library/file/__/include/moc_qsmf.cpp: ../library/include/qsmf.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ole/testg/drumstick-1.0.2/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating __/include/moc_qsmf.cpp"
	cd /home/ole/testg/drumstick-1.0.2/build/library/file/__/include && /home/ole/Qt5.5.0/5.5/gcc_64/bin/moc @/home/ole/testg/drumstick-1.0.2/build/library/file/__/include/moc_qsmf.cpp_parameters

library/file/__/include/moc_qwrk.cpp: ../library/include/qwrk.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ole/testg/drumstick-1.0.2/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating __/include/moc_qwrk.cpp"
	cd /home/ole/testg/drumstick-1.0.2/build/library/file/__/include && /home/ole/Qt5.5.0/5.5/gcc_64/bin/moc @/home/ole/testg/drumstick-1.0.2/build/library/file/__/include/moc_qwrk.cpp_parameters

library/file/__/include/moc_qove.cpp: ../library/include/qove.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ole/testg/drumstick-1.0.2/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating __/include/moc_qove.cpp"
	cd /home/ole/testg/drumstick-1.0.2/build/library/file/__/include && /home/ole/Qt5.5.0/5.5/gcc_64/bin/moc @/home/ole/testg/drumstick-1.0.2/build/library/file/__/include/moc_qove.cpp_parameters

library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qsmf.cpp.o: library/file/CMakeFiles/drumstick-file.dir/flags.make
library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qsmf.cpp.o: library/file/__/include/moc_qsmf.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ole/testg/drumstick-1.0.2/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qsmf.cpp.o"
	cd /home/ole/testg/drumstick-1.0.2/build/library/file && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/drumstick-file.dir/__/include/moc_qsmf.cpp.o -c /home/ole/testg/drumstick-1.0.2/build/library/file/__/include/moc_qsmf.cpp

library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qsmf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/drumstick-file.dir/__/include/moc_qsmf.cpp.i"
	cd /home/ole/testg/drumstick-1.0.2/build/library/file && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ole/testg/drumstick-1.0.2/build/library/file/__/include/moc_qsmf.cpp > CMakeFiles/drumstick-file.dir/__/include/moc_qsmf.cpp.i

library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qsmf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/drumstick-file.dir/__/include/moc_qsmf.cpp.s"
	cd /home/ole/testg/drumstick-1.0.2/build/library/file && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ole/testg/drumstick-1.0.2/build/library/file/__/include/moc_qsmf.cpp -o CMakeFiles/drumstick-file.dir/__/include/moc_qsmf.cpp.s

library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qsmf.cpp.o.requires:
.PHONY : library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qsmf.cpp.o.requires

library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qsmf.cpp.o.provides: library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qsmf.cpp.o.requires
	$(MAKE) -f library/file/CMakeFiles/drumstick-file.dir/build.make library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qsmf.cpp.o.provides.build
.PHONY : library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qsmf.cpp.o.provides

library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qsmf.cpp.o.provides.build: library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qsmf.cpp.o

library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qwrk.cpp.o: library/file/CMakeFiles/drumstick-file.dir/flags.make
library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qwrk.cpp.o: library/file/__/include/moc_qwrk.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ole/testg/drumstick-1.0.2/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qwrk.cpp.o"
	cd /home/ole/testg/drumstick-1.0.2/build/library/file && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/drumstick-file.dir/__/include/moc_qwrk.cpp.o -c /home/ole/testg/drumstick-1.0.2/build/library/file/__/include/moc_qwrk.cpp

library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qwrk.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/drumstick-file.dir/__/include/moc_qwrk.cpp.i"
	cd /home/ole/testg/drumstick-1.0.2/build/library/file && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ole/testg/drumstick-1.0.2/build/library/file/__/include/moc_qwrk.cpp > CMakeFiles/drumstick-file.dir/__/include/moc_qwrk.cpp.i

library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qwrk.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/drumstick-file.dir/__/include/moc_qwrk.cpp.s"
	cd /home/ole/testg/drumstick-1.0.2/build/library/file && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ole/testg/drumstick-1.0.2/build/library/file/__/include/moc_qwrk.cpp -o CMakeFiles/drumstick-file.dir/__/include/moc_qwrk.cpp.s

library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qwrk.cpp.o.requires:
.PHONY : library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qwrk.cpp.o.requires

library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qwrk.cpp.o.provides: library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qwrk.cpp.o.requires
	$(MAKE) -f library/file/CMakeFiles/drumstick-file.dir/build.make library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qwrk.cpp.o.provides.build
.PHONY : library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qwrk.cpp.o.provides

library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qwrk.cpp.o.provides.build: library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qwrk.cpp.o

library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qove.cpp.o: library/file/CMakeFiles/drumstick-file.dir/flags.make
library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qove.cpp.o: library/file/__/include/moc_qove.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ole/testg/drumstick-1.0.2/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qove.cpp.o"
	cd /home/ole/testg/drumstick-1.0.2/build/library/file && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/drumstick-file.dir/__/include/moc_qove.cpp.o -c /home/ole/testg/drumstick-1.0.2/build/library/file/__/include/moc_qove.cpp

library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qove.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/drumstick-file.dir/__/include/moc_qove.cpp.i"
	cd /home/ole/testg/drumstick-1.0.2/build/library/file && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ole/testg/drumstick-1.0.2/build/library/file/__/include/moc_qove.cpp > CMakeFiles/drumstick-file.dir/__/include/moc_qove.cpp.i

library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qove.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/drumstick-file.dir/__/include/moc_qove.cpp.s"
	cd /home/ole/testg/drumstick-1.0.2/build/library/file && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ole/testg/drumstick-1.0.2/build/library/file/__/include/moc_qove.cpp -o CMakeFiles/drumstick-file.dir/__/include/moc_qove.cpp.s

library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qove.cpp.o.requires:
.PHONY : library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qove.cpp.o.requires

library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qove.cpp.o.provides: library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qove.cpp.o.requires
	$(MAKE) -f library/file/CMakeFiles/drumstick-file.dir/build.make library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qove.cpp.o.provides.build
.PHONY : library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qove.cpp.o.provides

library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qove.cpp.o.provides.build: library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qove.cpp.o

library/file/CMakeFiles/drumstick-file.dir/qsmf.cpp.o: library/file/CMakeFiles/drumstick-file.dir/flags.make
library/file/CMakeFiles/drumstick-file.dir/qsmf.cpp.o: ../library/file/qsmf.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ole/testg/drumstick-1.0.2/build/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object library/file/CMakeFiles/drumstick-file.dir/qsmf.cpp.o"
	cd /home/ole/testg/drumstick-1.0.2/build/library/file && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/drumstick-file.dir/qsmf.cpp.o -c /home/ole/testg/drumstick-1.0.2/library/file/qsmf.cpp

library/file/CMakeFiles/drumstick-file.dir/qsmf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/drumstick-file.dir/qsmf.cpp.i"
	cd /home/ole/testg/drumstick-1.0.2/build/library/file && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ole/testg/drumstick-1.0.2/library/file/qsmf.cpp > CMakeFiles/drumstick-file.dir/qsmf.cpp.i

library/file/CMakeFiles/drumstick-file.dir/qsmf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/drumstick-file.dir/qsmf.cpp.s"
	cd /home/ole/testg/drumstick-1.0.2/build/library/file && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ole/testg/drumstick-1.0.2/library/file/qsmf.cpp -o CMakeFiles/drumstick-file.dir/qsmf.cpp.s

library/file/CMakeFiles/drumstick-file.dir/qsmf.cpp.o.requires:
.PHONY : library/file/CMakeFiles/drumstick-file.dir/qsmf.cpp.o.requires

library/file/CMakeFiles/drumstick-file.dir/qsmf.cpp.o.provides: library/file/CMakeFiles/drumstick-file.dir/qsmf.cpp.o.requires
	$(MAKE) -f library/file/CMakeFiles/drumstick-file.dir/build.make library/file/CMakeFiles/drumstick-file.dir/qsmf.cpp.o.provides.build
.PHONY : library/file/CMakeFiles/drumstick-file.dir/qsmf.cpp.o.provides

library/file/CMakeFiles/drumstick-file.dir/qsmf.cpp.o.provides.build: library/file/CMakeFiles/drumstick-file.dir/qsmf.cpp.o

library/file/CMakeFiles/drumstick-file.dir/qwrk.cpp.o: library/file/CMakeFiles/drumstick-file.dir/flags.make
library/file/CMakeFiles/drumstick-file.dir/qwrk.cpp.o: ../library/file/qwrk.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ole/testg/drumstick-1.0.2/build/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object library/file/CMakeFiles/drumstick-file.dir/qwrk.cpp.o"
	cd /home/ole/testg/drumstick-1.0.2/build/library/file && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/drumstick-file.dir/qwrk.cpp.o -c /home/ole/testg/drumstick-1.0.2/library/file/qwrk.cpp

library/file/CMakeFiles/drumstick-file.dir/qwrk.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/drumstick-file.dir/qwrk.cpp.i"
	cd /home/ole/testg/drumstick-1.0.2/build/library/file && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ole/testg/drumstick-1.0.2/library/file/qwrk.cpp > CMakeFiles/drumstick-file.dir/qwrk.cpp.i

library/file/CMakeFiles/drumstick-file.dir/qwrk.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/drumstick-file.dir/qwrk.cpp.s"
	cd /home/ole/testg/drumstick-1.0.2/build/library/file && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ole/testg/drumstick-1.0.2/library/file/qwrk.cpp -o CMakeFiles/drumstick-file.dir/qwrk.cpp.s

library/file/CMakeFiles/drumstick-file.dir/qwrk.cpp.o.requires:
.PHONY : library/file/CMakeFiles/drumstick-file.dir/qwrk.cpp.o.requires

library/file/CMakeFiles/drumstick-file.dir/qwrk.cpp.o.provides: library/file/CMakeFiles/drumstick-file.dir/qwrk.cpp.o.requires
	$(MAKE) -f library/file/CMakeFiles/drumstick-file.dir/build.make library/file/CMakeFiles/drumstick-file.dir/qwrk.cpp.o.provides.build
.PHONY : library/file/CMakeFiles/drumstick-file.dir/qwrk.cpp.o.provides

library/file/CMakeFiles/drumstick-file.dir/qwrk.cpp.o.provides.build: library/file/CMakeFiles/drumstick-file.dir/qwrk.cpp.o

library/file/CMakeFiles/drumstick-file.dir/qove.cpp.o: library/file/CMakeFiles/drumstick-file.dir/flags.make
library/file/CMakeFiles/drumstick-file.dir/qove.cpp.o: ../library/file/qove.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ole/testg/drumstick-1.0.2/build/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object library/file/CMakeFiles/drumstick-file.dir/qove.cpp.o"
	cd /home/ole/testg/drumstick-1.0.2/build/library/file && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/drumstick-file.dir/qove.cpp.o -c /home/ole/testg/drumstick-1.0.2/library/file/qove.cpp

library/file/CMakeFiles/drumstick-file.dir/qove.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/drumstick-file.dir/qove.cpp.i"
	cd /home/ole/testg/drumstick-1.0.2/build/library/file && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ole/testg/drumstick-1.0.2/library/file/qove.cpp > CMakeFiles/drumstick-file.dir/qove.cpp.i

library/file/CMakeFiles/drumstick-file.dir/qove.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/drumstick-file.dir/qove.cpp.s"
	cd /home/ole/testg/drumstick-1.0.2/build/library/file && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ole/testg/drumstick-1.0.2/library/file/qove.cpp -o CMakeFiles/drumstick-file.dir/qove.cpp.s

library/file/CMakeFiles/drumstick-file.dir/qove.cpp.o.requires:
.PHONY : library/file/CMakeFiles/drumstick-file.dir/qove.cpp.o.requires

library/file/CMakeFiles/drumstick-file.dir/qove.cpp.o.provides: library/file/CMakeFiles/drumstick-file.dir/qove.cpp.o.requires
	$(MAKE) -f library/file/CMakeFiles/drumstick-file.dir/build.make library/file/CMakeFiles/drumstick-file.dir/qove.cpp.o.provides.build
.PHONY : library/file/CMakeFiles/drumstick-file.dir/qove.cpp.o.provides

library/file/CMakeFiles/drumstick-file.dir/qove.cpp.o.provides.build: library/file/CMakeFiles/drumstick-file.dir/qove.cpp.o

# Object files for target drumstick-file
drumstick__file_OBJECTS = \
"CMakeFiles/drumstick-file.dir/__/include/moc_qsmf.cpp.o" \
"CMakeFiles/drumstick-file.dir/__/include/moc_qwrk.cpp.o" \
"CMakeFiles/drumstick-file.dir/__/include/moc_qove.cpp.o" \
"CMakeFiles/drumstick-file.dir/qsmf.cpp.o" \
"CMakeFiles/drumstick-file.dir/qwrk.cpp.o" \
"CMakeFiles/drumstick-file.dir/qove.cpp.o"

# External object files for target drumstick-file
drumstick__file_EXTERNAL_OBJECTS =

lib/libdrumstick-file.so.1.0.2: library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qsmf.cpp.o
lib/libdrumstick-file.so.1.0.2: library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qwrk.cpp.o
lib/libdrumstick-file.so.1.0.2: library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qove.cpp.o
lib/libdrumstick-file.so.1.0.2: library/file/CMakeFiles/drumstick-file.dir/qsmf.cpp.o
lib/libdrumstick-file.so.1.0.2: library/file/CMakeFiles/drumstick-file.dir/qwrk.cpp.o
lib/libdrumstick-file.so.1.0.2: library/file/CMakeFiles/drumstick-file.dir/qove.cpp.o
lib/libdrumstick-file.so.1.0.2: library/file/CMakeFiles/drumstick-file.dir/build.make
lib/libdrumstick-file.so.1.0.2: /home/ole/Qt5.5.0/5.5/gcc_64/lib/libQt5Core.so.5.5.0
lib/libdrumstick-file.so.1.0.2: library/file/CMakeFiles/drumstick-file.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../lib/libdrumstick-file.so"
	cd /home/ole/testg/drumstick-1.0.2/build/library/file && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/drumstick-file.dir/link.txt --verbose=$(VERBOSE)
	cd /home/ole/testg/drumstick-1.0.2/build/library/file && $(CMAKE_COMMAND) -E cmake_symlink_library ../../lib/libdrumstick-file.so.1.0.2 ../../lib/libdrumstick-file.so.1 ../../lib/libdrumstick-file.so

lib/libdrumstick-file.so.1: lib/libdrumstick-file.so.1.0.2
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libdrumstick-file.so.1

lib/libdrumstick-file.so: lib/libdrumstick-file.so.1.0.2
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libdrumstick-file.so

# Rule to build all files generated by this target.
library/file/CMakeFiles/drumstick-file.dir/build: lib/libdrumstick-file.so
.PHONY : library/file/CMakeFiles/drumstick-file.dir/build

library/file/CMakeFiles/drumstick-file.dir/requires: library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qsmf.cpp.o.requires
library/file/CMakeFiles/drumstick-file.dir/requires: library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qwrk.cpp.o.requires
library/file/CMakeFiles/drumstick-file.dir/requires: library/file/CMakeFiles/drumstick-file.dir/__/include/moc_qove.cpp.o.requires
library/file/CMakeFiles/drumstick-file.dir/requires: library/file/CMakeFiles/drumstick-file.dir/qsmf.cpp.o.requires
library/file/CMakeFiles/drumstick-file.dir/requires: library/file/CMakeFiles/drumstick-file.dir/qwrk.cpp.o.requires
library/file/CMakeFiles/drumstick-file.dir/requires: library/file/CMakeFiles/drumstick-file.dir/qove.cpp.o.requires
.PHONY : library/file/CMakeFiles/drumstick-file.dir/requires

library/file/CMakeFiles/drumstick-file.dir/clean:
	cd /home/ole/testg/drumstick-1.0.2/build/library/file && $(CMAKE_COMMAND) -P CMakeFiles/drumstick-file.dir/cmake_clean.cmake
.PHONY : library/file/CMakeFiles/drumstick-file.dir/clean

library/file/CMakeFiles/drumstick-file.dir/depend: library/file/__/include/moc_qsmf.cpp
library/file/CMakeFiles/drumstick-file.dir/depend: library/file/__/include/moc_qwrk.cpp
library/file/CMakeFiles/drumstick-file.dir/depend: library/file/__/include/moc_qove.cpp
	cd /home/ole/testg/drumstick-1.0.2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ole/testg/drumstick-1.0.2 /home/ole/testg/drumstick-1.0.2/library/file /home/ole/testg/drumstick-1.0.2/build /home/ole/testg/drumstick-1.0.2/build/library/file /home/ole/testg/drumstick-1.0.2/build/library/file/CMakeFiles/drumstick-file.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : library/file/CMakeFiles/drumstick-file.dir/depend


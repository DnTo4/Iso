# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rafa/Escritorio/Iso/BOBI

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rafa/Escritorio/Iso/BOBI/build

# Include any dependencies generated for this target.
include src/menus/CMakeFiles/menus.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/menus/CMakeFiles/menus.dir/compiler_depend.make

# Include the progress variables for this target.
include src/menus/CMakeFiles/menus.dir/progress.make

# Include the compile flags for this target's objects.
include src/menus/CMakeFiles/menus.dir/flags.make

src/menus/CMakeFiles/menus.dir/menus.cc.o: src/menus/CMakeFiles/menus.dir/flags.make
src/menus/CMakeFiles/menus.dir/menus.cc.o: ../src/menus/menus.cc
src/menus/CMakeFiles/menus.dir/menus.cc.o: src/menus/CMakeFiles/menus.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rafa/Escritorio/Iso/BOBI/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/menus/CMakeFiles/menus.dir/menus.cc.o"
	cd /home/rafa/Escritorio/Iso/BOBI/build/src/menus && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/menus/CMakeFiles/menus.dir/menus.cc.o -MF CMakeFiles/menus.dir/menus.cc.o.d -o CMakeFiles/menus.dir/menus.cc.o -c /home/rafa/Escritorio/Iso/BOBI/src/menus/menus.cc

src/menus/CMakeFiles/menus.dir/menus.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/menus.dir/menus.cc.i"
	cd /home/rafa/Escritorio/Iso/BOBI/build/src/menus && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rafa/Escritorio/Iso/BOBI/src/menus/menus.cc > CMakeFiles/menus.dir/menus.cc.i

src/menus/CMakeFiles/menus.dir/menus.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/menus.dir/menus.cc.s"
	cd /home/rafa/Escritorio/Iso/BOBI/build/src/menus && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rafa/Escritorio/Iso/BOBI/src/menus/menus.cc -o CMakeFiles/menus.dir/menus.cc.s

# Object files for target menus
menus_OBJECTS = \
"CMakeFiles/menus.dir/menus.cc.o"

# External object files for target menus
menus_EXTERNAL_OBJECTS =

src/menus/libmenus.a: src/menus/CMakeFiles/menus.dir/menus.cc.o
src/menus/libmenus.a: src/menus/CMakeFiles/menus.dir/build.make
src/menus/libmenus.a: src/menus/CMakeFiles/menus.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rafa/Escritorio/Iso/BOBI/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmenus.a"
	cd /home/rafa/Escritorio/Iso/BOBI/build/src/menus && $(CMAKE_COMMAND) -P CMakeFiles/menus.dir/cmake_clean_target.cmake
	cd /home/rafa/Escritorio/Iso/BOBI/build/src/menus && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/menus.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/menus/CMakeFiles/menus.dir/build: src/menus/libmenus.a
.PHONY : src/menus/CMakeFiles/menus.dir/build

src/menus/CMakeFiles/menus.dir/clean:
	cd /home/rafa/Escritorio/Iso/BOBI/build/src/menus && $(CMAKE_COMMAND) -P CMakeFiles/menus.dir/cmake_clean.cmake
.PHONY : src/menus/CMakeFiles/menus.dir/clean

src/menus/CMakeFiles/menus.dir/depend:
	cd /home/rafa/Escritorio/Iso/BOBI/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rafa/Escritorio/Iso/BOBI /home/rafa/Escritorio/Iso/BOBI/src/menus /home/rafa/Escritorio/Iso/BOBI/build /home/rafa/Escritorio/Iso/BOBI/build/src/menus /home/rafa/Escritorio/Iso/BOBI/build/src/menus/CMakeFiles/menus.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/menus/CMakeFiles/menus.dir/depend


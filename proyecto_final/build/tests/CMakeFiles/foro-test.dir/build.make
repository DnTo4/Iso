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
CMAKE_SOURCE_DIR = /home/rafa/Escritorio/Iso/proyecto_final

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rafa/Escritorio/Iso/proyecto_final/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/foro-test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/foro-test.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/foro-test.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/foro-test.dir/flags.make

tests/CMakeFiles/foro-test.dir/foro-test.cc.o: tests/CMakeFiles/foro-test.dir/flags.make
tests/CMakeFiles/foro-test.dir/foro-test.cc.o: ../tests/foro-test.cc
tests/CMakeFiles/foro-test.dir/foro-test.cc.o: tests/CMakeFiles/foro-test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rafa/Escritorio/Iso/proyecto_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/foro-test.dir/foro-test.cc.o"
	cd /home/rafa/Escritorio/Iso/proyecto_final/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/foro-test.dir/foro-test.cc.o -MF CMakeFiles/foro-test.dir/foro-test.cc.o.d -o CMakeFiles/foro-test.dir/foro-test.cc.o -c /home/rafa/Escritorio/Iso/proyecto_final/tests/foro-test.cc

tests/CMakeFiles/foro-test.dir/foro-test.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/foro-test.dir/foro-test.cc.i"
	cd /home/rafa/Escritorio/Iso/proyecto_final/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rafa/Escritorio/Iso/proyecto_final/tests/foro-test.cc > CMakeFiles/foro-test.dir/foro-test.cc.i

tests/CMakeFiles/foro-test.dir/foro-test.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/foro-test.dir/foro-test.cc.s"
	cd /home/rafa/Escritorio/Iso/proyecto_final/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rafa/Escritorio/Iso/proyecto_final/tests/foro-test.cc -o CMakeFiles/foro-test.dir/foro-test.cc.s

# Object files for target foro-test
foro__test_OBJECTS = \
"CMakeFiles/foro-test.dir/foro-test.cc.o"

# External object files for target foro-test
foro__test_EXTERNAL_OBJECTS =

tests/foro-test: tests/CMakeFiles/foro-test.dir/foro-test.cc.o
tests/foro-test: tests/CMakeFiles/foro-test.dir/build.make
tests/foro-test: src/foro/libforo.a
tests/foro-test: src/actividades/libactividades.a
tests/foro-test: lib/libgtest_main.a
tests/foro-test: lib/libgmock_main.a
tests/foro-test: lib/libgmock.a
tests/foro-test: lib/libgtest.a
tests/foro-test: src/persona/libpersona.a
tests/foro-test: tests/CMakeFiles/foro-test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rafa/Escritorio/Iso/proyecto_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable foro-test"
	cd /home/rafa/Escritorio/Iso/proyecto_final/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/foro-test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/foro-test.dir/build: tests/foro-test
.PHONY : tests/CMakeFiles/foro-test.dir/build

tests/CMakeFiles/foro-test.dir/clean:
	cd /home/rafa/Escritorio/Iso/proyecto_final/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/foro-test.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/foro-test.dir/clean

tests/CMakeFiles/foro-test.dir/depend:
	cd /home/rafa/Escritorio/Iso/proyecto_final/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rafa/Escritorio/Iso/proyecto_final /home/rafa/Escritorio/Iso/proyecto_final/tests /home/rafa/Escritorio/Iso/proyecto_final/build /home/rafa/Escritorio/Iso/proyecto_final/build/tests /home/rafa/Escritorio/Iso/proyecto_final/build/tests/CMakeFiles/foro-test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/foro-test.dir/depend


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
<<<<<<< HEAD
CMAKE_SOURCE_DIR = /mnt/c/Users/Andres/Desktop/Iso/proyecto_final

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build
=======
CMAKE_SOURCE_DIR = /home/rafa/Escritorio/asdasd/proyecto_final

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rafa/Escritorio/asdasd/proyecto_final/build
>>>>>>> d56f12ef443918ac4520125815e42f122e242a65

# Include any dependencies generated for this target.
include src/actividades/CMakeFiles/actividades.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/actividades/CMakeFiles/actividades.dir/compiler_depend.make

# Include the progress variables for this target.
include src/actividades/CMakeFiles/actividades.dir/progress.make

# Include the compile flags for this target's objects.
include src/actividades/CMakeFiles/actividades.dir/flags.make

src/actividades/CMakeFiles/actividades.dir/actividades.cc.o: src/actividades/CMakeFiles/actividades.dir/flags.make
src/actividades/CMakeFiles/actividades.dir/actividades.cc.o: ../src/actividades/actividades.cc
src/actividades/CMakeFiles/actividades.dir/actividades.cc.o: src/actividades/CMakeFiles/actividades.dir/compiler_depend.ts
<<<<<<< HEAD
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/actividades/CMakeFiles/actividades.dir/actividades.cc.o"
	cd /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/actividades && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/actividades/CMakeFiles/actividades.dir/actividades.cc.o -MF CMakeFiles/actividades.dir/actividades.cc.o.d -o CMakeFiles/actividades.dir/actividades.cc.o -c /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/src/actividades/actividades.cc

src/actividades/CMakeFiles/actividades.dir/actividades.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/actividades.dir/actividades.cc.i"
	cd /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/actividades && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/src/actividades/actividades.cc > CMakeFiles/actividades.dir/actividades.cc.i

src/actividades/CMakeFiles/actividades.dir/actividades.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/actividades.dir/actividades.cc.s"
	cd /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/actividades && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/src/actividades/actividades.cc -o CMakeFiles/actividades.dir/actividades.cc.s
=======
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rafa/Escritorio/asdasd/proyecto_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/actividades/CMakeFiles/actividades.dir/actividades.cc.o"
	cd /home/rafa/Escritorio/asdasd/proyecto_final/build/src/actividades && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/actividades/CMakeFiles/actividades.dir/actividades.cc.o -MF CMakeFiles/actividades.dir/actividades.cc.o.d -o CMakeFiles/actividades.dir/actividades.cc.o -c /home/rafa/Escritorio/asdasd/proyecto_final/src/actividades/actividades.cc

src/actividades/CMakeFiles/actividades.dir/actividades.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/actividades.dir/actividades.cc.i"
	cd /home/rafa/Escritorio/asdasd/proyecto_final/build/src/actividades && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rafa/Escritorio/asdasd/proyecto_final/src/actividades/actividades.cc > CMakeFiles/actividades.dir/actividades.cc.i

src/actividades/CMakeFiles/actividades.dir/actividades.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/actividades.dir/actividades.cc.s"
	cd /home/rafa/Escritorio/asdasd/proyecto_final/build/src/actividades && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rafa/Escritorio/asdasd/proyecto_final/src/actividades/actividades.cc -o CMakeFiles/actividades.dir/actividades.cc.s
>>>>>>> d56f12ef443918ac4520125815e42f122e242a65

# Object files for target actividades
actividades_OBJECTS = \
"CMakeFiles/actividades.dir/actividades.cc.o"

# External object files for target actividades
actividades_EXTERNAL_OBJECTS =

src/actividades/libactividades.a: src/actividades/CMakeFiles/actividades.dir/actividades.cc.o
src/actividades/libactividades.a: src/actividades/CMakeFiles/actividades.dir/build.make
src/actividades/libactividades.a: src/actividades/CMakeFiles/actividades.dir/link.txt
<<<<<<< HEAD
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libactividades.a"
	cd /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/actividades && $(CMAKE_COMMAND) -P CMakeFiles/actividades.dir/cmake_clean_target.cmake
	cd /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/actividades && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/actividades.dir/link.txt --verbose=$(VERBOSE)
=======
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rafa/Escritorio/asdasd/proyecto_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libactividades.a"
	cd /home/rafa/Escritorio/asdasd/proyecto_final/build/src/actividades && $(CMAKE_COMMAND) -P CMakeFiles/actividades.dir/cmake_clean_target.cmake
	cd /home/rafa/Escritorio/asdasd/proyecto_final/build/src/actividades && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/actividades.dir/link.txt --verbose=$(VERBOSE)
>>>>>>> d56f12ef443918ac4520125815e42f122e242a65

# Rule to build all files generated by this target.
src/actividades/CMakeFiles/actividades.dir/build: src/actividades/libactividades.a
.PHONY : src/actividades/CMakeFiles/actividades.dir/build

src/actividades/CMakeFiles/actividades.dir/clean:
<<<<<<< HEAD
	cd /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/actividades && $(CMAKE_COMMAND) -P CMakeFiles/actividades.dir/cmake_clean.cmake
.PHONY : src/actividades/CMakeFiles/actividades.dir/clean

src/actividades/CMakeFiles/actividades.dir/depend:
	cd /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/Andres/Desktop/Iso/proyecto_final /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/src/actividades /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/actividades /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/actividades/CMakeFiles/actividades.dir/DependInfo.cmake --color=$(COLOR)
=======
	cd /home/rafa/Escritorio/asdasd/proyecto_final/build/src/actividades && $(CMAKE_COMMAND) -P CMakeFiles/actividades.dir/cmake_clean.cmake
.PHONY : src/actividades/CMakeFiles/actividades.dir/clean

src/actividades/CMakeFiles/actividades.dir/depend:
	cd /home/rafa/Escritorio/asdasd/proyecto_final/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rafa/Escritorio/asdasd/proyecto_final /home/rafa/Escritorio/asdasd/proyecto_final/src/actividades /home/rafa/Escritorio/asdasd/proyecto_final/build /home/rafa/Escritorio/asdasd/proyecto_final/build/src/actividades /home/rafa/Escritorio/asdasd/proyecto_final/build/src/actividades/CMakeFiles/actividades.dir/DependInfo.cmake --color=$(COLOR)
>>>>>>> d56f12ef443918ac4520125815e42f122e242a65
.PHONY : src/actividades/CMakeFiles/actividades.dir/depend


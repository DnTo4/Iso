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
include src/systema/CMakeFiles/systema.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/systema/CMakeFiles/systema.dir/compiler_depend.make

# Include the progress variables for this target.
include src/systema/CMakeFiles/systema.dir/progress.make

# Include the compile flags for this target's objects.
include src/systema/CMakeFiles/systema.dir/flags.make

src/systema/CMakeFiles/systema.dir/systema.cc.o: src/systema/CMakeFiles/systema.dir/flags.make
src/systema/CMakeFiles/systema.dir/systema.cc.o: ../src/systema/systema.cc
src/systema/CMakeFiles/systema.dir/systema.cc.o: src/systema/CMakeFiles/systema.dir/compiler_depend.ts
<<<<<<< HEAD
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/systema/CMakeFiles/systema.dir/systema.cc.o"
	cd /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/systema && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/systema/CMakeFiles/systema.dir/systema.cc.o -MF CMakeFiles/systema.dir/systema.cc.o.d -o CMakeFiles/systema.dir/systema.cc.o -c /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/src/systema/systema.cc

src/systema/CMakeFiles/systema.dir/systema.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/systema.dir/systema.cc.i"
	cd /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/systema && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/src/systema/systema.cc > CMakeFiles/systema.dir/systema.cc.i

src/systema/CMakeFiles/systema.dir/systema.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/systema.dir/systema.cc.s"
	cd /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/systema && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/src/systema/systema.cc -o CMakeFiles/systema.dir/systema.cc.s
=======
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rafa/Escritorio/asdasd/proyecto_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/systema/CMakeFiles/systema.dir/systema.cc.o"
	cd /home/rafa/Escritorio/asdasd/proyecto_final/build/src/systema && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/systema/CMakeFiles/systema.dir/systema.cc.o -MF CMakeFiles/systema.dir/systema.cc.o.d -o CMakeFiles/systema.dir/systema.cc.o -c /home/rafa/Escritorio/asdasd/proyecto_final/src/systema/systema.cc

src/systema/CMakeFiles/systema.dir/systema.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/systema.dir/systema.cc.i"
	cd /home/rafa/Escritorio/asdasd/proyecto_final/build/src/systema && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rafa/Escritorio/asdasd/proyecto_final/src/systema/systema.cc > CMakeFiles/systema.dir/systema.cc.i

src/systema/CMakeFiles/systema.dir/systema.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/systema.dir/systema.cc.s"
	cd /home/rafa/Escritorio/asdasd/proyecto_final/build/src/systema && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rafa/Escritorio/asdasd/proyecto_final/src/systema/systema.cc -o CMakeFiles/systema.dir/systema.cc.s
>>>>>>> d56f12ef443918ac4520125815e42f122e242a65

# Object files for target systema
systema_OBJECTS = \
"CMakeFiles/systema.dir/systema.cc.o"

# External object files for target systema
systema_EXTERNAL_OBJECTS =

src/systema/libsystema.a: src/systema/CMakeFiles/systema.dir/systema.cc.o
src/systema/libsystema.a: src/systema/CMakeFiles/systema.dir/build.make
src/systema/libsystema.a: src/systema/CMakeFiles/systema.dir/link.txt
<<<<<<< HEAD
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libsystema.a"
	cd /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/systema && $(CMAKE_COMMAND) -P CMakeFiles/systema.dir/cmake_clean_target.cmake
	cd /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/systema && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/systema.dir/link.txt --verbose=$(VERBOSE)
=======
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rafa/Escritorio/asdasd/proyecto_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libsystema.a"
	cd /home/rafa/Escritorio/asdasd/proyecto_final/build/src/systema && $(CMAKE_COMMAND) -P CMakeFiles/systema.dir/cmake_clean_target.cmake
	cd /home/rafa/Escritorio/asdasd/proyecto_final/build/src/systema && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/systema.dir/link.txt --verbose=$(VERBOSE)
>>>>>>> d56f12ef443918ac4520125815e42f122e242a65

# Rule to build all files generated by this target.
src/systema/CMakeFiles/systema.dir/build: src/systema/libsystema.a
.PHONY : src/systema/CMakeFiles/systema.dir/build

src/systema/CMakeFiles/systema.dir/clean:
<<<<<<< HEAD
	cd /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/systema && $(CMAKE_COMMAND) -P CMakeFiles/systema.dir/cmake_clean.cmake
.PHONY : src/systema/CMakeFiles/systema.dir/clean

src/systema/CMakeFiles/systema.dir/depend:
	cd /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/Andres/Desktop/Iso/proyecto_final /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/src/systema /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/systema /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/systema/CMakeFiles/systema.dir/DependInfo.cmake --color=$(COLOR)
=======
	cd /home/rafa/Escritorio/asdasd/proyecto_final/build/src/systema && $(CMAKE_COMMAND) -P CMakeFiles/systema.dir/cmake_clean.cmake
.PHONY : src/systema/CMakeFiles/systema.dir/clean

src/systema/CMakeFiles/systema.dir/depend:
	cd /home/rafa/Escritorio/asdasd/proyecto_final/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rafa/Escritorio/asdasd/proyecto_final /home/rafa/Escritorio/asdasd/proyecto_final/src/systema /home/rafa/Escritorio/asdasd/proyecto_final/build /home/rafa/Escritorio/asdasd/proyecto_final/build/src/systema /home/rafa/Escritorio/asdasd/proyecto_final/build/src/systema/CMakeFiles/systema.dir/DependInfo.cmake --color=$(COLOR)
>>>>>>> d56f12ef443918ac4520125815e42f122e242a65
.PHONY : src/systema/CMakeFiles/systema.dir/depend


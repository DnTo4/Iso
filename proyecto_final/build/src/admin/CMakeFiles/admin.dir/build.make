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
CMAKE_SOURCE_DIR = /mnt/c/Users/Andres/Desktop/Iso/proyecto_final

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build

# Include any dependencies generated for this target.
include src/admin/CMakeFiles/admin.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/admin/CMakeFiles/admin.dir/compiler_depend.make

# Include the progress variables for this target.
include src/admin/CMakeFiles/admin.dir/progress.make

# Include the compile flags for this target's objects.
include src/admin/CMakeFiles/admin.dir/flags.make

# Object files for target admin
admin_OBJECTS =

# External object files for target admin
admin_EXTERNAL_OBJECTS =

src/admin/libadmin.a: src/admin/CMakeFiles/admin.dir/build.make
src/admin/libadmin.a: src/admin/CMakeFiles/admin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Linking CXX static library libadmin.a"
	cd /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/admin && $(CMAKE_COMMAND) -P CMakeFiles/admin.dir/cmake_clean_target.cmake
	cd /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/admin && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/admin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/admin/CMakeFiles/admin.dir/build: src/admin/libadmin.a
.PHONY : src/admin/CMakeFiles/admin.dir/build

src/admin/CMakeFiles/admin.dir/clean:
	cd /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/admin && $(CMAKE_COMMAND) -P CMakeFiles/admin.dir/cmake_clean.cmake
.PHONY : src/admin/CMakeFiles/admin.dir/clean

src/admin/CMakeFiles/admin.dir/depend:
	cd /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/Andres/Desktop/Iso/proyecto_final /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/src/admin /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/admin /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/src/admin/CMakeFiles/admin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/admin/CMakeFiles/admin.dir/depend


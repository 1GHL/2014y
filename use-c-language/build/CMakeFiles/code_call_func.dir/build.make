# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ndk/dev/github/1ghl/2014y/use-c-language

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ndk/dev/github/1ghl/2014y/use-c-language/build

# Include any dependencies generated for this target.
include CMakeFiles/code_call_func.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/code_call_func.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/code_call_func.dir/flags.make

CMakeFiles/code_call_func.dir/usage_trancode_call_func.c.o: CMakeFiles/code_call_func.dir/flags.make
CMakeFiles/code_call_func.dir/usage_trancode_call_func.c.o: ../usage_trancode_call_func.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ndk/dev/github/1ghl/2014y/use-c-language/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/code_call_func.dir/usage_trancode_call_func.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/code_call_func.dir/usage_trancode_call_func.c.o   -c /home/ndk/dev/github/1ghl/2014y/use-c-language/usage_trancode_call_func.c

CMakeFiles/code_call_func.dir/usage_trancode_call_func.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/code_call_func.dir/usage_trancode_call_func.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/ndk/dev/github/1ghl/2014y/use-c-language/usage_trancode_call_func.c > CMakeFiles/code_call_func.dir/usage_trancode_call_func.c.i

CMakeFiles/code_call_func.dir/usage_trancode_call_func.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/code_call_func.dir/usage_trancode_call_func.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/ndk/dev/github/1ghl/2014y/use-c-language/usage_trancode_call_func.c -o CMakeFiles/code_call_func.dir/usage_trancode_call_func.c.s

CMakeFiles/code_call_func.dir/usage_trancode_call_func.c.o.requires:
.PHONY : CMakeFiles/code_call_func.dir/usage_trancode_call_func.c.o.requires

CMakeFiles/code_call_func.dir/usage_trancode_call_func.c.o.provides: CMakeFiles/code_call_func.dir/usage_trancode_call_func.c.o.requires
	$(MAKE) -f CMakeFiles/code_call_func.dir/build.make CMakeFiles/code_call_func.dir/usage_trancode_call_func.c.o.provides.build
.PHONY : CMakeFiles/code_call_func.dir/usage_trancode_call_func.c.o.provides

CMakeFiles/code_call_func.dir/usage_trancode_call_func.c.o.provides.build: CMakeFiles/code_call_func.dir/usage_trancode_call_func.c.o

# Object files for target code_call_func
code_call_func_OBJECTS = \
"CMakeFiles/code_call_func.dir/usage_trancode_call_func.c.o"

# External object files for target code_call_func
code_call_func_EXTERNAL_OBJECTS =

code_call_func: CMakeFiles/code_call_func.dir/usage_trancode_call_func.c.o
code_call_func: CMakeFiles/code_call_func.dir/build.make
code_call_func: CMakeFiles/code_call_func.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable code_call_func"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/code_call_func.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/code_call_func.dir/build: code_call_func
.PHONY : CMakeFiles/code_call_func.dir/build

CMakeFiles/code_call_func.dir/requires: CMakeFiles/code_call_func.dir/usage_trancode_call_func.c.o.requires
.PHONY : CMakeFiles/code_call_func.dir/requires

CMakeFiles/code_call_func.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/code_call_func.dir/cmake_clean.cmake
.PHONY : CMakeFiles/code_call_func.dir/clean

CMakeFiles/code_call_func.dir/depend:
	cd /home/ndk/dev/github/1ghl/2014y/use-c-language/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ndk/dev/github/1ghl/2014y/use-c-language /home/ndk/dev/github/1ghl/2014y/use-c-language /home/ndk/dev/github/1ghl/2014y/use-c-language/build /home/ndk/dev/github/1ghl/2014y/use-c-language/build /home/ndk/dev/github/1ghl/2014y/use-c-language/build/CMakeFiles/code_call_func.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/code_call_func.dir/depend


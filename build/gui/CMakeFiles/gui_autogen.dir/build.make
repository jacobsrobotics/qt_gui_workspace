# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_SOURCE_DIR = /home/pmessan/qt-gui/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pmessan/qt-gui/build

# Utility rule file for gui_autogen.

# Include the progress variables for this target.
include gui/CMakeFiles/gui_autogen.dir/progress.make

gui/CMakeFiles/gui_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pmessan/qt-gui/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and RCC for target gui"
	cd /home/pmessan/qt-gui/build/gui && /usr/bin/cmake -E cmake_autogen /home/pmessan/qt-gui/build/gui/CMakeFiles/gui_autogen.dir Debug

gui_autogen: gui/CMakeFiles/gui_autogen
gui_autogen: gui/CMakeFiles/gui_autogen.dir/build.make

.PHONY : gui_autogen

# Rule to build all files generated by this target.
gui/CMakeFiles/gui_autogen.dir/build: gui_autogen

.PHONY : gui/CMakeFiles/gui_autogen.dir/build

gui/CMakeFiles/gui_autogen.dir/clean:
	cd /home/pmessan/qt-gui/build/gui && $(CMAKE_COMMAND) -P CMakeFiles/gui_autogen.dir/cmake_clean.cmake
.PHONY : gui/CMakeFiles/gui_autogen.dir/clean

gui/CMakeFiles/gui_autogen.dir/depend:
	cd /home/pmessan/qt-gui/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pmessan/qt-gui/src /home/pmessan/qt-gui/src/gui /home/pmessan/qt-gui/build /home/pmessan/qt-gui/build/gui /home/pmessan/qt-gui/build/gui/CMakeFiles/gui_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gui/CMakeFiles/gui_autogen.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Produce verbose output by default.
VERBOSE = 1

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion201607320\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion201607320\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\GitHub\CortexLib

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\GitHub\CortexLib\cmake-build-release-mingw

# Include any dependencies generated for this target.
include CMakeFiles/Registers.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Registers.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Registers.dir/flags.make

CMakeFiles/Registers.dir/startup.cpp.obj: CMakeFiles/Registers.dir/flags.make
CMakeFiles/Registers.dir/startup.cpp.obj: CMakeFiles/Registers.dir/includes_CXX.rsp
CMakeFiles/Registers.dir/startup.cpp.obj: ../startup.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\GitHub\CortexLib\cmake-build-release-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Registers.dir/startup.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Registers.dir\startup.cpp.obj -c C:\GitHub\CortexLib\startup.cpp

CMakeFiles/Registers.dir/startup.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Registers.dir/startup.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\GitHub\CortexLib\startup.cpp > CMakeFiles\Registers.dir\startup.cpp.i

CMakeFiles/Registers.dir/startup.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Registers.dir/startup.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\GitHub\CortexLib\startup.cpp -o CMakeFiles\Registers.dir\startup.cpp.s

CMakeFiles/Registers.dir/main.cpp.obj: CMakeFiles/Registers.dir/flags.make
CMakeFiles/Registers.dir/main.cpp.obj: CMakeFiles/Registers.dir/includes_CXX.rsp
CMakeFiles/Registers.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\GitHub\CortexLib\cmake-build-release-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Registers.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Registers.dir\main.cpp.obj -c C:\GitHub\CortexLib\main.cpp

CMakeFiles/Registers.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Registers.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\GitHub\CortexLib\main.cpp > CMakeFiles\Registers.dir\main.cpp.i

CMakeFiles/Registers.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Registers.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\GitHub\CortexLib\main.cpp -o CMakeFiles\Registers.dir\main.cpp.s

# Object files for target Registers
Registers_OBJECTS = \
"CMakeFiles/Registers.dir/startup.cpp.obj" \
"CMakeFiles/Registers.dir/main.cpp.obj"

# External object files for target Registers
Registers_EXTERNAL_OBJECTS =

Registers.elf: CMakeFiles/Registers.dir/startup.cpp.obj
Registers.elf: CMakeFiles/Registers.dir/main.cpp.obj
Registers.elf: CMakeFiles/Registers.dir/build.make
Registers.elf: CMakeFiles/Registers.dir/linklibs.rsp
Registers.elf: CMakeFiles/Registers.dir/objects1.rsp
Registers.elf: CMakeFiles/Registers.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\GitHub\CortexLib\cmake-build-release-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Registers.elf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Registers.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Registers.dir/build: Registers.elf

.PHONY : CMakeFiles/Registers.dir/build

CMakeFiles/Registers.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Registers.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Registers.dir/clean

CMakeFiles/Registers.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\GitHub\CortexLib C:\GitHub\CortexLib C:\GitHub\CortexLib\cmake-build-release-mingw C:\GitHub\CortexLib\cmake-build-release-mingw C:\GitHub\CortexLib\cmake-build-release-mingw\CMakeFiles\Registers.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Registers.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\care\Desktop\C++_Research\Smart_Ptrs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\care\Desktop\C++_Research\Smart_Ptrs

# Include any dependencies generated for this target.
include CMakeFiles/my_project.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/my_project.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/my_project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/my_project.dir/flags.make

CMakeFiles/my_project.dir/src/smart_ptr.cpp.obj: CMakeFiles/my_project.dir/flags.make
CMakeFiles/my_project.dir/src/smart_ptr.cpp.obj: src/smart_ptr.cpp
CMakeFiles/my_project.dir/src/smart_ptr.cpp.obj: CMakeFiles/my_project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\care\Desktop\C++_Research\Smart_Ptrs\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/my_project.dir/src/smart_ptr.cpp.obj"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/my_project.dir/src/smart_ptr.cpp.obj -MF CMakeFiles\my_project.dir\src\smart_ptr.cpp.obj.d -o CMakeFiles\my_project.dir\src\smart_ptr.cpp.obj -c C:\Users\care\Desktop\C++_Research\Smart_Ptrs\src\smart_ptr.cpp

CMakeFiles/my_project.dir/src/smart_ptr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/my_project.dir/src/smart_ptr.cpp.i"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\care\Desktop\C++_Research\Smart_Ptrs\src\smart_ptr.cpp > CMakeFiles\my_project.dir\src\smart_ptr.cpp.i

CMakeFiles/my_project.dir/src/smart_ptr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/my_project.dir/src/smart_ptr.cpp.s"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\care\Desktop\C++_Research\Smart_Ptrs\src\smart_ptr.cpp -o CMakeFiles\my_project.dir\src\smart_ptr.cpp.s

# Object files for target my_project
my_project_OBJECTS = \
"CMakeFiles/my_project.dir/src/smart_ptr.cpp.obj"

# External object files for target my_project
my_project_EXTERNAL_OBJECTS =

my_project.exe: CMakeFiles/my_project.dir/src/smart_ptr.cpp.obj
my_project.exe: CMakeFiles/my_project.dir/build.make
my_project.exe: CMakeFiles/my_project.dir/linkLibs.rsp
my_project.exe: CMakeFiles/my_project.dir/objects1.rsp
my_project.exe: CMakeFiles/my_project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\care\Desktop\C++_Research\Smart_Ptrs\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable my_project.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\my_project.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/my_project.dir/build: my_project.exe
.PHONY : CMakeFiles/my_project.dir/build

CMakeFiles/my_project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\my_project.dir\cmake_clean.cmake
.PHONY : CMakeFiles/my_project.dir/clean

CMakeFiles/my_project.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\care\Desktop\C++_Research\Smart_Ptrs C:\Users\care\Desktop\C++_Research\Smart_Ptrs C:\Users\care\Desktop\C++_Research\Smart_Ptrs C:\Users\care\Desktop\C++_Research\Smart_Ptrs C:\Users\care\Desktop\C++_Research\Smart_Ptrs\CMakeFiles\my_project.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/my_project.dir/depend


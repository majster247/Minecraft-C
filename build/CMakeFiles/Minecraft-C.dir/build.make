# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_SOURCE_DIR = /home/majster/Desktop/Projects/2DGame/Minecraft-C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/majster/Desktop/Projects/2DGame/Minecraft-C/build

# Include any dependencies generated for this target.
include CMakeFiles/Minecraft-C.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Minecraft-C.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Minecraft-C.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Minecraft-C.dir/flags.make

CMakeFiles/Minecraft-C.dir/src/main.cpp.o: CMakeFiles/Minecraft-C.dir/flags.make
CMakeFiles/Minecraft-C.dir/src/main.cpp.o: /home/majster/Desktop/Projects/2DGame/Minecraft-C/src/main.cpp
CMakeFiles/Minecraft-C.dir/src/main.cpp.o: CMakeFiles/Minecraft-C.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/majster/Desktop/Projects/2DGame/Minecraft-C/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Minecraft-C.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Minecraft-C.dir/src/main.cpp.o -MF CMakeFiles/Minecraft-C.dir/src/main.cpp.o.d -o CMakeFiles/Minecraft-C.dir/src/main.cpp.o -c /home/majster/Desktop/Projects/2DGame/Minecraft-C/src/main.cpp

CMakeFiles/Minecraft-C.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Minecraft-C.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/majster/Desktop/Projects/2DGame/Minecraft-C/src/main.cpp > CMakeFiles/Minecraft-C.dir/src/main.cpp.i

CMakeFiles/Minecraft-C.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Minecraft-C.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/majster/Desktop/Projects/2DGame/Minecraft-C/src/main.cpp -o CMakeFiles/Minecraft-C.dir/src/main.cpp.s

CMakeFiles/Minecraft-C.dir/src/GameEngine/OPENGL-WINDOW-ENGINE.cpp.o: CMakeFiles/Minecraft-C.dir/flags.make
CMakeFiles/Minecraft-C.dir/src/GameEngine/OPENGL-WINDOW-ENGINE.cpp.o: /home/majster/Desktop/Projects/2DGame/Minecraft-C/src/GameEngine/OPENGL-WINDOW-ENGINE.cpp
CMakeFiles/Minecraft-C.dir/src/GameEngine/OPENGL-WINDOW-ENGINE.cpp.o: CMakeFiles/Minecraft-C.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/majster/Desktop/Projects/2DGame/Minecraft-C/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Minecraft-C.dir/src/GameEngine/OPENGL-WINDOW-ENGINE.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Minecraft-C.dir/src/GameEngine/OPENGL-WINDOW-ENGINE.cpp.o -MF CMakeFiles/Minecraft-C.dir/src/GameEngine/OPENGL-WINDOW-ENGINE.cpp.o.d -o CMakeFiles/Minecraft-C.dir/src/GameEngine/OPENGL-WINDOW-ENGINE.cpp.o -c /home/majster/Desktop/Projects/2DGame/Minecraft-C/src/GameEngine/OPENGL-WINDOW-ENGINE.cpp

CMakeFiles/Minecraft-C.dir/src/GameEngine/OPENGL-WINDOW-ENGINE.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Minecraft-C.dir/src/GameEngine/OPENGL-WINDOW-ENGINE.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/majster/Desktop/Projects/2DGame/Minecraft-C/src/GameEngine/OPENGL-WINDOW-ENGINE.cpp > CMakeFiles/Minecraft-C.dir/src/GameEngine/OPENGL-WINDOW-ENGINE.cpp.i

CMakeFiles/Minecraft-C.dir/src/GameEngine/OPENGL-WINDOW-ENGINE.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Minecraft-C.dir/src/GameEngine/OPENGL-WINDOW-ENGINE.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/majster/Desktop/Projects/2DGame/Minecraft-C/src/GameEngine/OPENGL-WINDOW-ENGINE.cpp -o CMakeFiles/Minecraft-C.dir/src/GameEngine/OPENGL-WINDOW-ENGINE.cpp.s

CMakeFiles/Minecraft-C.dir/src/Minecraft/MinecraftDataNode.cpp.o: CMakeFiles/Minecraft-C.dir/flags.make
CMakeFiles/Minecraft-C.dir/src/Minecraft/MinecraftDataNode.cpp.o: /home/majster/Desktop/Projects/2DGame/Minecraft-C/src/Minecraft/MinecraftDataNode.cpp
CMakeFiles/Minecraft-C.dir/src/Minecraft/MinecraftDataNode.cpp.o: CMakeFiles/Minecraft-C.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/majster/Desktop/Projects/2DGame/Minecraft-C/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Minecraft-C.dir/src/Minecraft/MinecraftDataNode.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Minecraft-C.dir/src/Minecraft/MinecraftDataNode.cpp.o -MF CMakeFiles/Minecraft-C.dir/src/Minecraft/MinecraftDataNode.cpp.o.d -o CMakeFiles/Minecraft-C.dir/src/Minecraft/MinecraftDataNode.cpp.o -c /home/majster/Desktop/Projects/2DGame/Minecraft-C/src/Minecraft/MinecraftDataNode.cpp

CMakeFiles/Minecraft-C.dir/src/Minecraft/MinecraftDataNode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Minecraft-C.dir/src/Minecraft/MinecraftDataNode.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/majster/Desktop/Projects/2DGame/Minecraft-C/src/Minecraft/MinecraftDataNode.cpp > CMakeFiles/Minecraft-C.dir/src/Minecraft/MinecraftDataNode.cpp.i

CMakeFiles/Minecraft-C.dir/src/Minecraft/MinecraftDataNode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Minecraft-C.dir/src/Minecraft/MinecraftDataNode.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/majster/Desktop/Projects/2DGame/Minecraft-C/src/Minecraft/MinecraftDataNode.cpp -o CMakeFiles/Minecraft-C.dir/src/Minecraft/MinecraftDataNode.cpp.s

# Object files for target Minecraft-C
Minecraft__C_OBJECTS = \
"CMakeFiles/Minecraft-C.dir/src/main.cpp.o" \
"CMakeFiles/Minecraft-C.dir/src/GameEngine/OPENGL-WINDOW-ENGINE.cpp.o" \
"CMakeFiles/Minecraft-C.dir/src/Minecraft/MinecraftDataNode.cpp.o"

# External object files for target Minecraft-C
Minecraft__C_EXTERNAL_OBJECTS =

Minecraft-C: CMakeFiles/Minecraft-C.dir/src/main.cpp.o
Minecraft-C: CMakeFiles/Minecraft-C.dir/src/GameEngine/OPENGL-WINDOW-ENGINE.cpp.o
Minecraft-C: CMakeFiles/Minecraft-C.dir/src/Minecraft/MinecraftDataNode.cpp.o
Minecraft-C: CMakeFiles/Minecraft-C.dir/build.make
Minecraft-C: libGLAD.a
Minecraft-C: external/glfw/src/libglfw3.a
Minecraft-C: /usr/lib/x86_64-linux-gnu/librt.a
Minecraft-C: /usr/lib/x86_64-linux-gnu/libm.so
Minecraft-C: /usr/lib/x86_64-linux-gnu/libGLX.so
Minecraft-C: /usr/lib/x86_64-linux-gnu/libOpenGL.so
Minecraft-C: CMakeFiles/Minecraft-C.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/majster/Desktop/Projects/2DGame/Minecraft-C/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Minecraft-C"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Minecraft-C.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Minecraft-C.dir/build: Minecraft-C
.PHONY : CMakeFiles/Minecraft-C.dir/build

CMakeFiles/Minecraft-C.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Minecraft-C.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Minecraft-C.dir/clean

CMakeFiles/Minecraft-C.dir/depend:
	cd /home/majster/Desktop/Projects/2DGame/Minecraft-C/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/majster/Desktop/Projects/2DGame/Minecraft-C /home/majster/Desktop/Projects/2DGame/Minecraft-C /home/majster/Desktop/Projects/2DGame/Minecraft-C/build /home/majster/Desktop/Projects/2DGame/Minecraft-C/build /home/majster/Desktop/Projects/2DGame/Minecraft-C/build/CMakeFiles/Minecraft-C.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Minecraft-C.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/HW4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HW4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HW4.dir/flags.make

CMakeFiles/HW4.dir/main.cpp.o: CMakeFiles/HW4.dir/flags.make
CMakeFiles/HW4.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HW4.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW4.dir/main.cpp.o -c "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/main.cpp"

CMakeFiles/HW4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW4.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/main.cpp" > CMakeFiles/HW4.dir/main.cpp.i

CMakeFiles/HW4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW4.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/main.cpp" -o CMakeFiles/HW4.dir/main.cpp.s

CMakeFiles/HW4.dir/ships.cpp.o: CMakeFiles/HW4.dir/flags.make
CMakeFiles/HW4.dir/ships.cpp.o: ../ships.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/HW4.dir/ships.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW4.dir/ships.cpp.o -c "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/ships.cpp"

CMakeFiles/HW4.dir/ships.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW4.dir/ships.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/ships.cpp" > CMakeFiles/HW4.dir/ships.cpp.i

CMakeFiles/HW4.dir/ships.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW4.dir/ships.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/ships.cpp" -o CMakeFiles/HW4.dir/ships.cpp.s

CMakeFiles/HW4.dir/board.cpp.o: CMakeFiles/HW4.dir/flags.make
CMakeFiles/HW4.dir/board.cpp.o: ../board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/HW4.dir/board.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW4.dir/board.cpp.o -c "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/board.cpp"

CMakeFiles/HW4.dir/board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW4.dir/board.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/board.cpp" > CMakeFiles/HW4.dir/board.cpp.i

CMakeFiles/HW4.dir/board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW4.dir/board.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/board.cpp" -o CMakeFiles/HW4.dir/board.cpp.s

CMakeFiles/HW4.dir/player.cpp.o: CMakeFiles/HW4.dir/flags.make
CMakeFiles/HW4.dir/player.cpp.o: ../player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/HW4.dir/player.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW4.dir/player.cpp.o -c "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/player.cpp"

CMakeFiles/HW4.dir/player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW4.dir/player.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/player.cpp" > CMakeFiles/HW4.dir/player.cpp.i

CMakeFiles/HW4.dir/player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW4.dir/player.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/player.cpp" -o CMakeFiles/HW4.dir/player.cpp.s

CMakeFiles/HW4.dir/other.cpp.o: CMakeFiles/HW4.dir/flags.make
CMakeFiles/HW4.dir/other.cpp.o: ../other.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/HW4.dir/other.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW4.dir/other.cpp.o -c "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/other.cpp"

CMakeFiles/HW4.dir/other.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW4.dir/other.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/other.cpp" > CMakeFiles/HW4.dir/other.cpp.i

CMakeFiles/HW4.dir/other.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW4.dir/other.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/other.cpp" -o CMakeFiles/HW4.dir/other.cpp.s

CMakeFiles/HW4.dir/game.cpp.o: CMakeFiles/HW4.dir/flags.make
CMakeFiles/HW4.dir/game.cpp.o: ../game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/HW4.dir/game.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW4.dir/game.cpp.o -c "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/game.cpp"

CMakeFiles/HW4.dir/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW4.dir/game.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/game.cpp" > CMakeFiles/HW4.dir/game.cpp.i

CMakeFiles/HW4.dir/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW4.dir/game.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/game.cpp" -o CMakeFiles/HW4.dir/game.cpp.s

CMakeFiles/HW4.dir/human_player.cpp.o: CMakeFiles/HW4.dir/flags.make
CMakeFiles/HW4.dir/human_player.cpp.o: ../human_player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/HW4.dir/human_player.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW4.dir/human_player.cpp.o -c "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/human_player.cpp"

CMakeFiles/HW4.dir/human_player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW4.dir/human_player.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/human_player.cpp" > CMakeFiles/HW4.dir/human_player.cpp.i

CMakeFiles/HW4.dir/human_player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW4.dir/human_player.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/human_player.cpp" -o CMakeFiles/HW4.dir/human_player.cpp.s

CMakeFiles/HW4.dir/ai_player.cpp.o: CMakeFiles/HW4.dir/flags.make
CMakeFiles/HW4.dir/ai_player.cpp.o: ../ai_player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/HW4.dir/ai_player.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW4.dir/ai_player.cpp.o -c "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/ai_player.cpp"

CMakeFiles/HW4.dir/ai_player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW4.dir/ai_player.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/ai_player.cpp" > CMakeFiles/HW4.dir/ai_player.cpp.i

CMakeFiles/HW4.dir/ai_player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW4.dir/ai_player.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/ai_player.cpp" -o CMakeFiles/HW4.dir/ai_player.cpp.s

CMakeFiles/HW4.dir/random_ai.cpp.o: CMakeFiles/HW4.dir/flags.make
CMakeFiles/HW4.dir/random_ai.cpp.o: ../random_ai.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/HW4.dir/random_ai.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW4.dir/random_ai.cpp.o -c "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/random_ai.cpp"

CMakeFiles/HW4.dir/random_ai.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW4.dir/random_ai.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/random_ai.cpp" > CMakeFiles/HW4.dir/random_ai.cpp.i

CMakeFiles/HW4.dir/random_ai.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW4.dir/random_ai.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/random_ai.cpp" -o CMakeFiles/HW4.dir/random_ai.cpp.s

CMakeFiles/HW4.dir/cheating_ai.cpp.o: CMakeFiles/HW4.dir/flags.make
CMakeFiles/HW4.dir/cheating_ai.cpp.o: ../cheating_ai.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/HW4.dir/cheating_ai.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW4.dir/cheating_ai.cpp.o -c "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/cheating_ai.cpp"

CMakeFiles/HW4.dir/cheating_ai.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW4.dir/cheating_ai.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/cheating_ai.cpp" > CMakeFiles/HW4.dir/cheating_ai.cpp.i

CMakeFiles/HW4.dir/cheating_ai.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW4.dir/cheating_ai.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/cheating_ai.cpp" -o CMakeFiles/HW4.dir/cheating_ai.cpp.s

CMakeFiles/HW4.dir/hunt_destroy_ai.cpp.o: CMakeFiles/HW4.dir/flags.make
CMakeFiles/HW4.dir/hunt_destroy_ai.cpp.o: ../hunt_destroy_ai.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/HW4.dir/hunt_destroy_ai.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW4.dir/hunt_destroy_ai.cpp.o -c "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/hunt_destroy_ai.cpp"

CMakeFiles/HW4.dir/hunt_destroy_ai.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW4.dir/hunt_destroy_ai.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/hunt_destroy_ai.cpp" > CMakeFiles/HW4.dir/hunt_destroy_ai.cpp.i

CMakeFiles/HW4.dir/hunt_destroy_ai.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW4.dir/hunt_destroy_ai.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/hunt_destroy_ai.cpp" -o CMakeFiles/HW4.dir/hunt_destroy_ai.cpp.s

# Object files for target HW4
HW4_OBJECTS = \
"CMakeFiles/HW4.dir/main.cpp.o" \
"CMakeFiles/HW4.dir/ships.cpp.o" \
"CMakeFiles/HW4.dir/board.cpp.o" \
"CMakeFiles/HW4.dir/player.cpp.o" \
"CMakeFiles/HW4.dir/other.cpp.o" \
"CMakeFiles/HW4.dir/game.cpp.o" \
"CMakeFiles/HW4.dir/human_player.cpp.o" \
"CMakeFiles/HW4.dir/ai_player.cpp.o" \
"CMakeFiles/HW4.dir/random_ai.cpp.o" \
"CMakeFiles/HW4.dir/cheating_ai.cpp.o" \
"CMakeFiles/HW4.dir/hunt_destroy_ai.cpp.o"

# External object files for target HW4
HW4_EXTERNAL_OBJECTS =

HW4: CMakeFiles/HW4.dir/main.cpp.o
HW4: CMakeFiles/HW4.dir/ships.cpp.o
HW4: CMakeFiles/HW4.dir/board.cpp.o
HW4: CMakeFiles/HW4.dir/player.cpp.o
HW4: CMakeFiles/HW4.dir/other.cpp.o
HW4: CMakeFiles/HW4.dir/game.cpp.o
HW4: CMakeFiles/HW4.dir/human_player.cpp.o
HW4: CMakeFiles/HW4.dir/ai_player.cpp.o
HW4: CMakeFiles/HW4.dir/random_ai.cpp.o
HW4: CMakeFiles/HW4.dir/cheating_ai.cpp.o
HW4: CMakeFiles/HW4.dir/hunt_destroy_ai.cpp.o
HW4: CMakeFiles/HW4.dir/build.make
HW4: CMakeFiles/HW4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable HW4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HW4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HW4.dir/build: HW4

.PHONY : CMakeFiles/HW4.dir/build

CMakeFiles/HW4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HW4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HW4.dir/clean

CMakeFiles/HW4.dir/depend:
	cd "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip" "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip" "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/cmake-build-debug" "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/cmake-build-debug" "/Users/howardma/Desktop/Spring 21/ECS 36B/HW4 copy/BattleShip/cmake-build-debug/CMakeFiles/HW4.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/HW4.dir/depend


cmake_minimum_required(VERSION 3.15)
project(BattleShip)

set(CMAKE_CXX_STANDARD 14)

add_executable(BattleShip main.cpp ships.cpp ships.h board.cpp board.h player.cpp player.h other.cpp other.h game.cpp game.h human_player.cpp human_player.h ai_player.cpp ai_player.h random_ai.cpp random_ai.h cheating_ai.cpp cheating_ai.h hunt_destroy_ai.cpp hunt_destroy_ai.h)
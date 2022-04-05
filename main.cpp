#include <iostream>
#include <fstream>
#include <memory>
#include "other.h"
#include "ships.h"
#include "board.h"
#include "player.h"
#include "game.h"
#include "ai_player.h"
#include "human_player.h"
#include "random_ai.h"
#include "cheating_ai.h"
#include "hunt_destroy_ai.h"

int main(int argc, char** argv) {
    int row, col, num_of_ship, game_mode,seed, ai1_mode, ai2_mode;

    if (argc == 3){
        seed = std::stoi(argv[2]);
    }else{
        seed = time(nullptr);
    }

    BattleShip::ai_player::rng.seed(seed);

    std::ifstream the_file(argv[1]);


    the_file >> row;
    the_file >> col;
    the_file >> num_of_ship;

    BattleShip::ships shipsToPlace(the_file, num_of_ship);
//    shipsToPlace.printship();

    BattleShip::board board (row, col);
//    board.printboard();
    //what kind of game to play
    game_mode = ask_game_mode();
    std::unique_ptr<BattleShip::player> player1;
    std::unique_ptr<BattleShip::player> player2;

    if(game_mode == 1){
        player1 = std::make_unique<BattleShip::human_player>(ask_name(1), board);
        player1->print_setup_board();
        player1->place_ships(shipsToPlace.getShips());
        player2 = std::make_unique<BattleShip::human_player>(ask_name(2), board);
        player2->print_setup_board();
        player2->place_ships(shipsToPlace.getShips());

    }else if (game_mode == 2){
        player1 = std::make_unique<BattleShip::human_player>(ask_name(1), board);
        player1->print_setup_board();
        player1->place_ships(shipsToPlace.getShips());
        ai1_mode = ask_ai_mode();
        if(ai1_mode == 1){//cheat
            player2 = std::make_unique<BattleShip::cheating_ai>(1, board);
            player2->place_ships(shipsToPlace.getShips());
        }else if(ai1_mode == 2){//random
            player2 = std::make_unique<BattleShip::random_ai>(1, board);
            player2->place_ships(shipsToPlace.getShips());
        }else{//hunt destroy
            player2 = std::make_unique<BattleShip::hunt_destroy_ai>(1, board);
            player2->place_ships(shipsToPlace.getShips());
        }

    }else{
        ai1_mode = ask_ai_mode();
        if(ai1_mode == 1){//cheat
            player1 = std::make_unique<BattleShip::cheating_ai>(1, board);
            player1->place_ships(shipsToPlace.getShips());
        }else if(ai1_mode == 2){//random
            player1 = std::make_unique<BattleShip::random_ai>(1, board);
            player1->place_ships(shipsToPlace.getShips());
        }else{//hunt destroy
            player1 = std::make_unique<BattleShip::hunt_destroy_ai>(1, board);
            player1->place_ships(shipsToPlace.getShips());
        }
        ai2_mode = ask_ai_mode();
        if(ai2_mode == 1){//cheat
            player2 = std::make_unique<BattleShip::cheating_ai>(2, board);
            player2->place_ships(shipsToPlace.getShips());
        }else if(ai2_mode == 2){//random
            player2 = std::make_unique<BattleShip::random_ai>(2, board);
            player2->place_ships(shipsToPlace.getShips());
        }else{//hunt destroy
            player2 = std::make_unique<BattleShip::hunt_destroy_ai>(2, board);
            player2->place_ships(shipsToPlace.getShips());
        }
    }


    //play the game
    std::unique_ptr<BattleShip::game> the_game = std::make_unique<BattleShip::game>(*player1, *player2);
    //BattleShip::game the_game (*player1, *player2);

    while(true){
//        player1->print_cur_boards(*player2);
        player1->fire(*player2);


        if(the_game->is_over()){
            the_game->game_winner(*player1);
            break;
        }
 //       player2->print_cur_boards(*player1);
        player2->fire(*player1);

        if(the_game->is_over()){
            the_game->game_winner(*player2);
            break;
        }
    }
}

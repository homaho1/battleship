//
// Created by Howard Ma on 2021/5/25.
//

#include "ai_player.h"
std::mt19937 BattleShip::ai_player::rng;

BattleShip::ai_player::ai_player(int num, BattleShip::board passed_board) : player("AI " + std::to_string(num),passed_board){

}

int BattleShip::ai_player::getRandomInt(int min, int max) {
    //uniform distribution
    std::uniform_int_distribution<int> distribution(min, max);
    return distribution(rng);
}

void BattleShip::ai_player::place_ships(std::map<char, int> map) {
    //0=h 1=v
    int orient, row, row_min = 0, row_max, col, col_min = 0, col_max;
    char HorV;
    for(const auto& ship : map) {
        while(true){
            orient = getRandomInt(0, 1);
            if (orient == 0) {
                HorV = 'h';
                row_max = player_board.getContent().size() - 1;
                col_max = player_board.getContent().at(0).size() - ship.second;
                row = getRandomInt(row_min,row_max);
                col = getRandomInt(col_min,col_max);
            } else {
                HorV = 'v';
                row_max = player_board.getContent().size() - ship.second;
                col_max = player_board.getContent().at(0).size() - 1;
                row = getRandomInt(row_min,row_max);
                col = getRandomInt(col_min,col_max);
            }

            if(can_be_placed(row, col, HorV, ship.second)){
                break;
            }
        }
        put_one_ship(row, col, ship.first, HorV, ship.second);
        std::cout << this->getName() << "'s Board"<< std::endl;
        display_board();
        std::cout << std::endl;
    }

}


//
// Created by Howard Ma on 2021/5/23.
//

#include "game.h"

BattleShip::game::game(BattleShip::player& player1, BattleShip::player& player2) : player1(player1), player2(player2){

}

bool BattleShip::game::is_over() {
    if(player1.is_win(player2) or player2.is_win(player1)){
        return true;
    } else
        return false;
}

void BattleShip::game::game_winner(const BattleShip::player& winner) {
    std::cout << winner.getName() << " won the game!" << std::endl;
}

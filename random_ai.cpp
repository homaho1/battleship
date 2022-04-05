//
// Created by Howard Ma on 2021/5/25.
//

#include "random_ai.h"

BattleShip::random_ai::random_ai(int num, BattleShip::board passed_board) : ai_player(num, passed_board) {
    for(int i = 0; i < player_board.getContent().size(); i++){
        for(int j = 0; j < player_board.getContent().at(0).size();j++){
            list_random_left.push_back({i,j});
        }
    }
}

void BattleShip::random_ai::fire(BattleShip::player &opponent) {
    int row, col;
    char ship_hit;
    while(true){
        getRowAndCol(row,col);
        if(can_fire(row, col, opponent)){
            if (is_hit(row, col, opponent.getBoard().getContent())) {
                ship_hit = opponent.getBoard().getContent().at(row).at(col);
                opponent.changeBoard().changeContent().at(row).at(col) = 'X';
                print_cur_boards(opponent);
                std::cout << this->getName() << " hit " << opponent.getName()
                          << "'s " << ship_hit << "!" << std::endl;
                if (opponent.is_ship_destroyed(ship_hit)) {
                    std::cout << this->getName() << " destroyed "
                              << opponent.getName() << "'s "
                              << ship_hit << "!\n" << std::endl;
                } else {
                    std::cout << std::endl;
                }
            } else {
                opponent.changeBoard().changeContent().at(row).at(col) = 'O';
                print_cur_boards(opponent);
                std::cout << "Missed.\n" << std::endl;
            }
            break;
        }
    }
}

void BattleShip::random_ai::getRowAndCol(int &row, int &col) {
    int randomInt = getRandomInt(0, list_random_left.size() - 1);
    row = list_random_left.at(randomInt).first;
    col = list_random_left.at(randomInt).second;

    list_random_left.erase(list_random_left.begin() + randomInt);
}

//constructor

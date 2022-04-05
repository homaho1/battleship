//
// Created by Howard Ma on 2021/5/25.
//

#include "cheating_ai.h"

BattleShip::cheating_ai::cheating_ai(int num, BattleShip::board passed_board) : ai_player(num, passed_board) {

}

void BattleShip::cheating_ai::fire(BattleShip::player &opponent) {
    char ship_hit;
    for(int i = 0; i < opponent.getBoard().getContent().size(); i++){
        for(int j = 0; j < opponent.getBoard().getContent().at(i).size(); j++){
            if(opponent.getBoard().getContent().at(i).at(j) != '*'
            && opponent.getBoard().getContent().at(i).at(j) != 'X'){
                ship_hit = opponent.getBoard().getContent().at(i).at(j);
                opponent.changeBoard().changeContent().at(i).at(j) = 'X';
                print_cur_boards(opponent);
                std::cout << this->getName() << " hit " << opponent.getName()
                          << "'s " << ship_hit << "!" << std::endl;
                if(opponent.is_ship_destroyed(ship_hit)){
                    std::cout << this->getName() << " destroyed "
                              << opponent.getName() << "'s "
                              << ship_hit << "!\n" << std::endl;
                }else {
                    std::cout << std::endl;
                }
                return;
            }

        }
    }
}

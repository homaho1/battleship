//
// Created by Howard Ma on 2021/5/25.
//

#include "hunt_destroy_ai.h"
#include <algorithm>
BattleShip::hunt_destroy_ai::hunt_destroy_ai(int num, BattleShip::board passed_board) : random_ai(num, passed_board) {

}

void BattleShip::hunt_destroy_ai::fire(BattleShip::player &opponent) {
    int row, col;
    char ship_hit;

    while (true) {
        if(destroy_mode_on()){
            get_coordinates_from_list(row,col);
            delete_from_list();
        } else{
            getRowAndCol(row, col);
        }

        if (can_fire(row, col, opponent)) {
            if (is_hit(row, col, opponent.getBoard().getContent())) {
                ship_hit = opponent.getBoard().getContent().at(row).at(col);
                opponent.changeBoard().changeContent().at(row).at(col) = 'X';
                add_to_list(row,col);
                print_cur_boards(opponent);
                std::cout << getName() << " hit " << opponent.getName()
                          << "'s " << ship_hit << "!" << std::endl;
                if (opponent.is_ship_destroyed(ship_hit)) {
                    std::cout << getName() << " destroyed "
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

void BattleShip::hunt_destroy_ai::add_to_list(int row, int col) {
    list_to_hit.push_back({row,col-1});
    list_to_hit.push_back({row-1,col});
    list_to_hit.push_back({row,col+1});
    list_to_hit.push_back({row+1,col});
}

void BattleShip::hunt_destroy_ai::delete_from_list() {
 //   std::find(list_random_left.begin(), list_random_left.end(), list_random_left);
    delete_from_random_list(list_to_hit.at(0).first,list_to_hit.at(0).second);
    list_to_hit.erase(list_to_hit.begin());

}

bool BattleShip::hunt_destroy_ai::destroy_mode_on() {
    return not list_to_hit.empty();
}

void BattleShip::hunt_destroy_ai::get_coordinates_from_list(int& row, int& col) {
    row = list_to_hit.front().first;
    col = list_to_hit.front().second;
}

void BattleShip::hunt_destroy_ai::delete_from_random_list(int row, int col) {
    for(int i = 0; i < list_random_left.size();i++) {
        if(list_random_left.at(i).first == row && list_random_left.at(i).second == col){
            list_random_left.erase(list_random_left.begin()+i); //iterator
        }
    }
}

//bool operator==(const std::pair<int, int>& list_to_hit,const std::pair<int, int>& list_random_left) {
//    return list_to_hit.first == list_random_left.first and list_to_hit.second == list_random_left.second;
//}
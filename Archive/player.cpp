//
// Created by Howard Ma on 2021/5/23.
//

#include "player.h"
#include <sstream>
#include <utility>

BattleShip::player::player(const std::string& player_name, board passed_board) : name(player_name), player_board(passed_board){

}

void BattleShip::player::print_setup_board() {
    std::cout << "  "; //first blank
    for(int i = 0; i < player_board.getContent().at(0).size(); i++){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    for(int j = 0; j < player_board.getContent().size(); j++){
        std::cout << j << " ";
        for(int k = 0; k < player_board.getContent().at(j).size(); k++){
            std::cout << player_board.getContent().at(j).at(k) << " ";
        }
        std::cout << std::endl;
    }
}


void BattleShip::player::display_board() {
    std::cout << "  "; //first blank
    for(int i = 0; i < player_board.getContent().at(0).size(); i++){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    for(int j = 0; j < player_board.getContent().size(); j++){
        std::cout << j << " ";
        for(int k = 0; k < player_board.getContent().at(j).size(); k++){
            std::cout << player_board.getContent().at(j).at(k) << " ";
        }
        std::cout << std::endl;
    }

}

bool BattleShip::player::is_win(const player& opponent) {
    for(int i = 0; i < opponent.player_board.getContent().size(); i++){
        for(int j = 0; j < opponent.player_board.getContent().at(i).size(); j++){
            if(opponent.player_board.getContent().at(i).at(j) != 'X'
            && opponent.player_board.getContent().at(i).at(j) != 'O'
            && opponent.player_board.getContent().at(i).at(j) != '*'){
                return false;
            }
        }
    }
    return true;
}

void BattleShip::player::fire(BattleShip::player& opponent) {
    int row, col;
    char ship_hit;
    while(true) {
        whereToFire(row, col);
        if (can_fire(row, col, opponent)) {
            if (is_hit(row, col, opponent.player_board.getContent())) {
                ship_hit = opponent.player_board.getContent().at(row).at(col);
                opponent.player_board.changeContent().at(row).at(col) = 'X';
                this->print_cur_boards(opponent);
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
                opponent.player_board.changeContent().at(row).at(col) = 'O';
                this->print_cur_boards(opponent);
                std::cout << "Missed.\n" << std::endl;
            }
            break;
        }
    }

}

void BattleShip::player::whereToFire(int &row, int &col) {
    std::string line;
    while(true){
        std::cout << name << ", where would you like to fire?\n" << "Enter your attack coordinate in the form row col: ";
        std::getline(std::cin, line);
        std::stringstream lineToParse(line);
        int num1, num2;
        lineToParse >> num1 >> num2; //read into num
//        lineToParse >> num2;
        if(lineToParse) { //if able to read the number
            std::string what_is_left;
            lineToParse >> what_is_left;
            if (!lineToParse) { //if not able to read the rest
                row = num1;
                col = num2;
                break;
            }
        }
    }
}

bool BattleShip::player::can_fire(int row, int col, const player &opponent) {
    if(row < 0 || row > opponent.player_board.getContent().size() - 1
    || col < 0 || col > opponent.player_board.getContent().at(row).size() - 1){
        return false;
    } else{
        if(opponent.player_board.getContent().at(row).at(col) != 'X' &&
                opponent.player_board.getContent().at(row).at(col) != 'O'){
            return true;
        } else{
            return false;
        }
    }
}

bool BattleShip::player::is_hit(int row, int col, std::vector<std::string> opponent_board) {
    if(opponent_board.at(row).at(col) == '*'){
        return false;
    } else{
        return true;
    }
}

const std::string BattleShip::player::getName() const {
    return name;
}

bool BattleShip::player::is_ship_destroyed(char ship) {
    for(int i = 0; i < player_board.getContent().size(); i++){
        for(int j = 0; j < player_board.getContent().at(i).size(); j++){
            if(player_board.getContent().at(i).at(j) == ship){
                return false;
            }
        }
    }
    return true;
}

void BattleShip::player::print_cur_boards(const player &opponent) {
    std::cout << this->getName() << "'s Firing Board" << std::endl;
    opponent.player_board.fire_print();
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << this->getName() << "'s Placement Board" << std::endl;
    this->player_board.placement_print();
}

const BattleShip::board &BattleShip::player::getBoard() const {
    return player_board;
}

BattleShip::board &BattleShip::player::changeBoard() {
    return player_board;
}

bool BattleShip::player::can_be_placed(int row_num, int col_num, char HorV, int len) {
    // original point out of bonds
    if(row_num < 0 || row_num > player_board.getContent().size() - 1 || col_num < 0 || col_num > player_board.getContent().at(row_num).size() - 1){
        return false;
    }
    // horizontal
    if(HorV == 'H'|| HorV == 'h'){
        if(col_num + len - 1 > player_board.getContent().at(row_num).size() - 1){ //if exceed the board
            return false;
        } else{
            for(int i = 0; i < len; i++){
                if(player_board.getContent().at(row_num).at(col_num + i) != '*'){
                    return false;
                }
            }
            return true;
        }

    } else { //veritical
        if(row_num + len - 1 > player_board.getContent().size() - 1) { //if exceed the board
            return false;
        } else {
            for(int j = 0; j < len; j++){
                if(player_board.getContent().at(row_num + j).at(col_num) != '*'){
                    return false;
                }
            }
            return true;
        }
    }
}

void BattleShip::player::put_one_ship(int row_num, int col_num, char ship, char HorV, int len) {
    if(HorV == 'H' || HorV == 'h'){
        for(int i = 0; i < len; i++){
            player_board.changeContent().at(row_num).at(col_num + i) = ship;
        }
    } else {
        for(int j = 0; j < len; j++){
            player_board.changeContent().at(row_num + j).at(col_num) = ship;
        }
    }
}



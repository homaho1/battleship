//
// Created by Howard Ma on 2021/5/24.
//

#include "human_player.h"
#include <sstream>

BattleShip::human_player::human_player(const std::string &player_name, BattleShip::board passed_board) : player(player_name, passed_board){

}

void BattleShip::human_player::place_ships(std::map<char, int> map) {
        char HorV;
        int row_num, col_num;
        for(const auto& ship : map){
            while(true){
                HorV = getValid_orient(ship.first);
                where_to_place_ship(ship.first, ship.second, row_num, col_num);
                if(can_be_placed(row_num, col_num, HorV, ship.second)){
                    break;
                }
            }
            put_one_ship(row_num, col_num, ship.first, HorV, ship.second);
            display_board();
        }
    }

char BattleShip::human_player::getValid_orient(char ship_name) {
    std::string line;
    while(true){
        std::cout << name << ", do you want to place " << ship_name << " horizontally or vertically?\n"
                  << "Enter h for horizontal or v for vertical\n" << "Your choice: ";
        std::getline(std::cin, line);
        std::stringstream lineToParse(line);
        char c;
        lineToParse >> c; //read into num
        if(lineToParse) { //if able to read the number
            std::string what_is_left;
            lineToParse >> what_is_left;
            if (!lineToParse && ((c == 'H' )|| (c == 'h' )|| (c == 'V' )|| (c == 'v')) ) { //if not able to read the rest
                return c;
            }
        }
    }
}

void BattleShip::human_player::where_to_place_ship(char ship_name, int len, int &row_num, int &col_num) {
    std::string line;
    std::cout << name << ", enter the row and column you want to place " << ship_name << ", which is " << len
              << " long, at with a space in between row and col: ";
    std::getline(std::cin, line);
    std::stringstream lineToParse(line);
    int num1, num2;
    lineToParse >> num1 >> num2;
//    lineToParse >> num2;
    if(lineToParse) {
        std::string what_is_left;
        lineToParse >> what_is_left;
        if(!lineToParse){
            row_num = num1;
            col_num = num2;
        }
    }
}

void BattleShip::human_player::fire(BattleShip::player &opponent) {
    int row, col;
    char ship_hit;
    while(true) {
        print_cur_boards(opponent);
        whereToFire(row, col);
        if (can_fire(row, col, opponent)) {
            if (is_hit(row, col, opponent.getBoard().getContent())) {
                ship_hit = opponent.getBoard().getContent().at(row).at(col);
                opponent.changeBoard().changeContent().at(row).at(col) = 'X';
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
                opponent.changeBoard().changeContent().at(row).at(col) = 'O';
                this->print_cur_boards(opponent);
                std::cout << "Missed.\n" << std::endl;
            }
            break;
        }
    }
}

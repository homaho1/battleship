//
// Created by Howard Ma on 2021/5/23.
//

#include "board.h"
#include <iostream>

BattleShip::board::board(int row, int col) : row(row), col(col){
    std::string line(col, '*');
    for(int i = 0; i < row; i++){
        content.push_back(line);
    }
}

std::vector<std::string> BattleShip::board::getContent() const {
    return content;
}

std::vector<std::string> &BattleShip::board::changeContent() {
    return content;
}

void BattleShip::board::fire_print() const {
    std::cout << "  "; //first blank
    for(int i = 0; i < col; i++){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    for(int j = 0; j < row; j++){
        std::cout << j << " ";
        for(int k = 0; k < col; k++){
            if(content.at(j).at(k) == 'X' || content.at(j).at(k) == 'O'
            || content.at(j).at(k) == '*'){
                std::cout << content.at(j).at(k) << " ";
            }else {
                std::cout << "*" << " ";
            }
        }
        std::cout << std::endl;
    }
}

void BattleShip::board::placement_print() const{
    std::cout << "  "; //first blank
    for(int i = 0; i < content.at(0).size(); i++){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    for(int j = 0; j < content.size(); j++){
        std::cout << j << " ";
        for(int k = 0; k < content.at(j).size(); k++){
            std::cout << content.at(j).at(k) << " ";
        }
        std::cout << std::endl;
    }

}






//void BattleShip::board::printboard() {
//    std::cout << "  "; //first blank
//    for(int i = 0; i < col; i++){
//        std::cout << i << " ";
//    }
//    std::cout << std::endl;
//
//    for(int j = 0; j < row; j++){
//        std::cout << j << " ";
//        for(int k = 0; k < col; k++){
//            std::cout << content.at(j).at(k) << " ";
//        }
//        std::cout << std::endl;
//    }
//}

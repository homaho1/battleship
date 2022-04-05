//
// Created by Howard Ma on 2021/5/23.
//

#include "ships.h"

BattleShip::ships::ships(std::ifstream& file, int num) {
    char c;
    int len;
    for(int i = 0; i < num; i++){
        file >> c;
        file >> len;
        map.insert({c, len});
    }
}

std::map<char, int> BattleShip::ships::getShips() {
    return map;
}

//void BattleShip::ships::printship() {
//    for(const auto& ship : map){
//        std::cout << "ship name: " << ship.first << " ship length " << ship.second
//                << std::endl;
//    }
//
//}

//
// Created by Howard Ma on 2021/5/23.
//

#ifndef HW4_SHIPS_H
#define HW4_SHIPS_H
#include <map>
#include <fstream>
#include <iostream>

namespace BattleShip{
    class ships {
    public:
        ships(std::ifstream& file, int num);
        std::map<char, int> getShips();
//        void printship();
    private:
        std::map<char, int> map;
    };

}


#endif //HW4_SHIPS_H

//
// Created by Howard Ma on 2021/5/23.
//

#ifndef HW4_BOARD_H
#define HW4_BOARD_H
#include <vector>
#include <string>

namespace BattleShip{
    class board {
    public:
        board(int row, int col);
        std::vector<std::string> getContent() const;
        std::vector<std::string>& changeContent();
        void fire_print() const;
        void placement_print() const;
//        void printboard();

    private:
        std::vector<std::string> content;
        int row, col;
    };
}



#endif //HW4_BOARD_H

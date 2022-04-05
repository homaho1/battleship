//
// Created by Howard Ma on 2021/5/25.
//

#ifndef HW4_RANDOM_AI_H
#define HW4_RANDOM_AI_H
#include "ai_player.h"

namespace BattleShip{
    class random_ai : public ai_player{
    public:
        random_ai(int num, board passed_board);
        virtual ~random_ai() = default;
        virtual void fire(player& opponent) override;
        void getRowAndCol(int& row, int& col);

    protected:
        std::vector<std::pair<int,int>> list_random_left;
    };
}



#endif //HW4_RANDOM_AI_H

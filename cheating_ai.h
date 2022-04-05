//
// Created by Howard Ma on 2021/5/25.
//

#ifndef HW4_CHEATING_AI_H
#define HW4_CHEATING_AI_H
#include "ai_player.h"

namespace BattleShip{
    class cheating_ai : public ai_player{
    public:
        cheating_ai(int num, board passed_board);
        virtual ~cheating_ai() = default;
        virtual void fire(player& opponent) override;
    };
}



#endif //HW4_CHEATING_AI_H

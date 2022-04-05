//
// Created by Howard Ma on 2021/5/23.
//

#ifndef HW4_GAME_H
#define HW4_GAME_H
#include "player.h"

namespace BattleShip{
    class game {
    public:
        game(player& player1, player& player2);
        bool is_over();
        void game_winner(const player& winner);
    private:
        player& player1;
        player& player2;
    };
}



#endif //HW4_GAME_H

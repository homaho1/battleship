//
// Created by Howard Ma on 2021/5/25.
//

#ifndef HW4_AI_PLAYER_H
#define HW4_AI_PLAYER_H
#include "player.h"
#include <random>

namespace BattleShip{
    class ai_player : public player{
    public:
    explicit ai_player(int num, board passed_board);
    virtual ~ai_player() = default;
    virtual void place_ships(std::map<char, int> map) override;
    virtual void fire(player& opponent) override = 0;

    static std::mt19937 rng;

    int getRandomInt(int min, int max);
    };
}



#endif //HW4_AI_PLAYER_H

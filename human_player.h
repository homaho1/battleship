//
// Created by Howard Ma on 2021/5/24.
//

#ifndef HW4_HUMAN_PLAYER_H
#define HW4_HUMAN_PLAYER_H
#include "player.h"

namespace BattleShip{
    class human_player : public player{
    public:
    human_player(const std::string& player_name, board passed_board);
    virtual void place_ships(std::map<char, int> map) override;
    virtual void fire(player& opponent) override;


    protected:

        void where_to_place_ship(char ship_name, int len, int &row_num, int &col_num);
        char getValid_orient(char ship_name);

    };
}



#endif //HW4_HUMAN_PLAYER_H

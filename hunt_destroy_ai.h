//
// Created by Howard Ma on 2021/5/25.
//

#ifndef HW4_HUNT_DESTROY_AI_H
#define HW4_HUNT_DESTROY_AI_H
#include "random_ai.h"

namespace BattleShip{
    class hunt_destroy_ai : public random_ai{
    public:
        hunt_destroy_ai(int num, board passed_board);
        virtual ~hunt_destroy_ai() = default;
        virtual void fire(player& opponent) override;

        void add_to_list(int row, int col);
        void get_coordinates_from_list(int& row, int& col);
        void delete_from_list();

    private:

        bool destroy_mode_on();
        std::vector<std::pair<int, int>> list_to_hit;
        void delete_from_random_list(int row, int col);
    };
}

bool operator==(const std::pair<int, int>& list_to_hit,const std::pair<int, int> &list_random_left);




#endif //HW4_HUNT_DESTROY_AI_H

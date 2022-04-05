//
// Created by Howard Ma on 2021/5/23.
//

#ifndef HW4_PLAYER_H
#define HW4_PLAYER_H
#include <string>
#include <iostream>
#include "board.h"
#include "ships.h"

namespace BattleShip{
    class player {
    public:
        player(const std::string& player_name, board passed_board);
        virtual ~player() = default;
        void print_setup_board();
        virtual void place_ships(std::map<char, int> map) = 0;

        void print_cur_boards(const player &opponent);

        virtual void fire(player& opponent) = 0;
        bool is_win(const player& opponent);
        const std::string getName() const;


        const board& getBoard() const;
        board& changeBoard();
        bool is_ship_destroyed(char ship);


    protected:

        board player_board;
        bool can_be_placed(int row_num, int col_num, char HorV, int len);
        void put_one_ship(int row_num, int col_num, char ship, char HorV, int len);

        void display_board();
        void whereToFire(int &row, int &col);
        bool can_fire(int row, int col, const player &opponent);
        bool is_hit(int row, int col, std::vector<std::string> opponent_board);

        std::string name;
    };
}



#endif //HW4_PLAYER_H

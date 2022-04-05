//
// Created by Howard Ma on 2021/5/23.
//

#include "other.h"
#include <iostream>

std::string ask_name(int num) {
    std::string name;
    std::cout << "Player " << num << " please enter your name: ";
    std::getline(std::cin , name);
    return name;
}

int ask_game_mode() {
    std::string line;
    int ans;
    std::cout << "What type of game do you want to play?\n"
                 "1. Human vs Human\n"
                 "2. Human vs AI\n"
                 "3. AI vs AI\n"
                 "Your choice: ";
    std::getline(std::cin, line);
    ans = stoi(line);

    return ans;
}

int ask_ai_mode() {
    std::string line;
    int ans;
    std::cout << "What AI do you want?\n"
                 "1. Cheating AI\n"
                 "2. Random AI\n"
                 "3. Hunt Destroy AI\n"
                 "Your choice: ";
    std::getline(std::cin, line);
    ans = stoi(line);

    return ans;
}


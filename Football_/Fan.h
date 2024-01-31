//
// Created by Annie on 25.1.2024 г..
//

#ifndef FOOTBALL_FAN_H
#define FOOTBALL_FAN_H
#include "User.h"
#include <iostream>

using namespace std;

class Fan : public User {

public:
    void buyTickets();
    void viewGraphic();
    void seeRanks();
};


#endif //FOOTBALL_FAN_H

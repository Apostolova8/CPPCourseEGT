//
// Created by Annie on 23.1.2024 г..
//

#ifndef FOOTBALL_PLAYERS_H
#define FOOTBALL_PLAYERS_H
#include <iostream>

using namespace std;

class Players {

Players (string);

public:
    const string &getName() const;

    void setName(const string &name);

    void print();

private:
    string name;
};


#endif //FOOTBALL_PLAYERS_H

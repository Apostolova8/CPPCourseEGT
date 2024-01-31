//
// Created by Annie on 23.1.2024 г..
//

#ifndef FOOTBALL_TEAMS_H
#define FOOTBALL_TEAMS_H
#include "Players.h"
#include <iostream>
#include <vector>

using namespace std;

class Teams {

public:

    Teams(string, string);

    const string & getName() const;

    void setName(const string &name);

    const string &getCity() const;

    void setCity(const string &city);

    int getPoints() const;

    void updatePoints(int);

private:
    string name;
    string city;
    int points;
};



#endif //FOOTBALL_TEAMS_H

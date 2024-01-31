//
// Created by Annie on 23.1.2024 г..
//

#ifndef FOOTBALL_ADMIN_H
#define FOOTBALL_ADMIN_H
#include <vector>
#include "User.h"
#include "Teams.h"

using namespace std;

class Admin : public User {

public:
    Admin(string, string);
    void addTeam(Teams);
    void removeTeam(Teams);
    void updateTeam(Teams);
    vector<Teams> getTeams();

private:
    vector<Teams> teams;
};


#endif //FOOTBALL_ADMIN_H

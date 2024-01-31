//
// Created by Annie on 23.1.2024 г..
//

#include "Admin.h"
#include "User.h"
#include <iostream>

using namespace std;

Admin::Admin(std::string name, std::string pass)
    : User(name, pass) {}

void Admin::addTeam(Teams t) {
    this->teams.push_back(t);
}

vector<Teams> Admin::getTeams() {
    return this->teams;
}

void Admin::removeTeam(Teams t) {
    string teamName = t.getName();
    for (int i=0; i<teams.size(); i++) {
        if (teams.at(i).getName() == teamName) {
            teams.erase (teams.begin()+i);
            break;
        }
    }
}

void Admin::updateTeam(Teams t) {
    string teamName = t.getName();
    for (int i=0; i<teams.size(); i++) {
        if (teams.at(i).getName() == teamName) {
            teams.at(i) = t;
            break;
        }
    }
}
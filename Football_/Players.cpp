//
// Created by Annie on 23.1.2024 г..
//

#include "Players.h"

const string &Players::getName() const {
    return name;
}

void Players::setName(const string &name) {
    Players::name = name;
}

Players::Players(string name) {
    setName(name);
}

void Players::print() {
    cout << "Players: " << endl;
}

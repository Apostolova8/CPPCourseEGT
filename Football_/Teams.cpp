//
// Created by Annie on 23.1.2024 г..
//

#include "Teams.h"

const string & Teams::getName() const {
    return name;
}

void Teams::setName(const string &name) {
    Teams::name = name;
}

const string &Teams::getCity() const {
    return city;
}

void Teams::setCity(const string &city) {
    Teams::city = city;
}

int Teams::getPoints() const {
    return points;
}

Teams::Teams(string name, string city) {
    setName(name);
    setCity(city);
    this->points=0;
}

void Teams::updatePoints(int newPoints) {
    this->points = this->points + newPoints;
}


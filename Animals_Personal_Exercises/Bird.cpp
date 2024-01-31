//
// Created by Annie on 24.1.2024 г..
//

#include "Bird.h"

Bird::Bird(const string& name, int age) : Animal(name, age) {}

void Bird::makeSound() const {
    std::cout << "Tweet! Tweet!" << endl;
}

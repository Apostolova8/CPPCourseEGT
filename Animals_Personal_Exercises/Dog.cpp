//
// Created by Annie on 24.1.2024 г..
//

#include "Dog.h"

Dog::Dog(const string& name, int age) : Animal(name, age) {}

void Dog::makeSound() const {
    std::cout << "Woof! Woof!" << endl;
}

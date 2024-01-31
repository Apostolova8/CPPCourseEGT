//
// Created by Annie on 24.1.2024 г..
//

#include "Cat.h"


Cat::Cat(const string& name, int age) : Animal(name, age) {}

void Cat::makeSound() const {
    std::cout << "Meow! Meow!" << std::endl;
}

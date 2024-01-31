//
// Created by Annie on 24.1.2024 г..
//

#ifndef ANIMALS_ANIMAL_H
#define ANIMALS_ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

class Animal {

public:
    Animal(const string& name, int age);
    virtual ~Animal();

    virtual void makeSound() const = 0;

private:
    string name;
    int age;
};

#endif //ANIMALS_ANIMAL_H

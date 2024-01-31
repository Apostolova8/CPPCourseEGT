//
// Created by Annie on 24.1.2024 г..
//

#ifndef ANIMALS_BIRD_H
#define ANIMALS_BIRD_H

#include "Animal.h"

class Bird : public Animal {

public:
    Bird(const string& name, int age);
    virtual void makeSound() const;
};

#endif //ANIMALS_BIRD_H

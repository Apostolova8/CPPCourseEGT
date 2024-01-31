//
// Created by Annie on 24.1.2024 г..
//

#ifndef ANIMALS_DOG_H
#define ANIMALS_DOG_H

#include "Animal.h"

class Dog : public Animal {

public:
    Dog(const string& name, int age);
    virtual void makeSound() const;

};




#endif //ANIMALS_DOG_H

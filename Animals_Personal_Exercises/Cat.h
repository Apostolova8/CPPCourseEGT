//
// Created by Annie on 24.1.2024 г..
//

#ifndef ANIMALS_CAT_H
#define ANIMALS_CAT_H

#include "Animal.h"

class Cat : public Animal {

public:
    Cat(const string& name, int age);
    virtual void makeSound() const;
};


#endif //ANIMALS_CAT_H

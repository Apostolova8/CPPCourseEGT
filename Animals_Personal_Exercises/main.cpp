#include <iostream>
#include <vector>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Bird.h"

int main() {
    vector<Animal*> animals;

    animals.push_back(new Dog("Axel", 3));
    animals.push_back(new Cat("Moli", 2));
    animals.push_back(new Bird("Pesho", 1));

    for (const auto& animal : animals) {
        animal->makeSound();
    }

    // Clean up dynamically allocated memory
    for (const auto& animal : animals) {
        delete animal;
    }

    return 0;
}


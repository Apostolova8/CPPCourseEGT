//
// Created by Annie on 22.1.2024 г..
//

#ifndef ONLINESHOP_NOALCOHOLICDRINKS_H
#define ONLINESHOP_NOALCOHOLICDRINKS_H
#include "Drinks.h"
#include <iostream>

using namespace std;

    class NoAlcoholicDrinks : public Drinks {

    public:

        NoAlcoholicDrinks(string name, string brand, double price, double volume);
        virtual double calculatePrice();
        virtual void print();

    private:

    };


#endif //ONLINESHOP_NOALCOHOLICDRINKS_H

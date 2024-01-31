//
// Created by Annie on 22.1.2024 г..
//

#ifndef ONLINESHOP_ALCOHOLICDRINKS_H
#define ONLINESHOP_ALCOHOLICDRINKS_H
#include <iostream>
#include "Drinks.h"

using namespace std;

    class AlcoholicDrinks : public Drinks {

    public:
        AlcoholicDrinks(string, string, double, double, double);
        virtual double calculatePrice();
        virtual void print();

    private:
        const double alcoholVolume;
        const double alcoholTax = 1.07;
    };



#endif //ONLINESHOP_ALCOHOLICDRINKS_H

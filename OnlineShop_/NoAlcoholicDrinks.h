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
    NoAlcoholicDrinks(string, string, double, int, double, double);

    virtual double calculatePrice() override;

    virtual void print() override;

    double getLiters() const;

    void setLiters(double liters);

    double getCityTax() const;

    void setCityTax(double cityTax);

private:
    double liters;
    double cityTax;

};


#endif //ONLINESHOP_NOALCOHOLICDRINKS_H

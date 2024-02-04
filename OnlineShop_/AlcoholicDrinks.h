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
    AlcoholicDrinks(string, string, double, int, double, double);

    virtual double calculatePrice() override;

    virtual void print() override;

    double getVolume() const;

    void setVolume(double volume);

    double getTax() const;

    void setTax(double tax);

private:
    double volume;
    double tax;

};



#endif //ONLINESHOP_ALCOHOLICDRINKS_H

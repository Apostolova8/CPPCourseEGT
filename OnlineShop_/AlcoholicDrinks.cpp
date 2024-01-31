//
// Created by Annie on 22.1.2024 г..
//

#include "AlcoholicDrinks.h"
#include "Drinks.h"
#include <iostream>
#include <iomanip>

using namespace std;

AlcoholicDrinks::AlcoholicDrinks(string name, string kind, double price, double volume, double alcoholVolume)
        :Drinks(name, price, quantity), alcoholVolume(alcoholVolume) {
}

double AlcoholicDrinks::calculatePrice()
{
    return Drinks::getPrice() * Drinks::getCityTax() *alcoholTax;
}

void AlcoholicDrinks::print()
{
    Drinks::print();
    cout << "Alcohol volume: " << this->alcoholVolume << endl;
    cout  << fixed << setprecision(2) << "Price with taxes: " << this->calculatePrice()  << endl;
}

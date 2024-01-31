//
// Created by Annie on 22.1.2024 г..
//

#include <iomanip>
#include "NoAlcoholicDrinks.h"
#include "Drinks.h"

NoAlcoholicDrinks::NoAlcoholicDrinks(string name, std::string brand, double price, double volume)
        : Drinks(name, price, quantity) {
}

double NoAlcoholicDrinks::calculatePrice()
{
    return Drinks::getPrice() * Drinks::getCityTax();
}

void NoAlcoholicDrinks::print()
{
    Drinks::print();
    cout << fixed << setprecision(2) << "Price with taxes: " << this->calculatePrice() << endl;
}

//
// Created by Annie on 22.1.2024 г..
//


#include "NoAlcoholicDrinks.h"

using namespace std;

double NoAlcoholicDrinks::getLiters() const {
    return liters;
}

void NoAlcoholicDrinks::setLiters(double liters) {
    NoAlcoholicDrinks::liters = liters;
}

double NoAlcoholicDrinks::getCityTax() const {
    return cityTax;
}

void NoAlcoholicDrinks::setCityTax(double cityTax) {
    NoAlcoholicDrinks::cityTax = cityTax;
}

NoAlcoholicDrinks::NoAlcoholicDrinks(string name, string type, double price, int quantity, double liters, double cityTax)
                                    : Drinks(name, type, price, quantity) {
    setLiters(liters);
    setCityTax(cityTax);
}

double NoAlcoholicDrinks::calculatePrice() {
    return (getQuantity() * getPrice() + getCityTax());
}

void NoAlcoholicDrinks::print() {
    cout << endl;
    cout << "Name: " << getName() << endl;
    cout << "Type: " << getType() << endl;
    cout << "Price: " << getPrice() << " BGN" << endl;
    cout << "Quantity: " << getQuantity() << " pcs." << endl;
    cout << "Liters: " << getLiters() << " l." << endl;
    cout << "Tax: " << getCityTax() << " BGN" << endl;
    cout << "Final price: " << calculatePrice() << " BGN" << endl;
}

//
// Created by Annie on 22.1.2024 г..
//

#include "AlcoholicDrinks.h"

using namespace std;


double AlcoholicDrinks::getVolume() const {
    return volume;
}

void AlcoholicDrinks::setVolume(double volume) {
    AlcoholicDrinks::volume = volume;
}

double AlcoholicDrinks::getTax() const {
    return tax;
}

void AlcoholicDrinks::setTax(double tax) {
    AlcoholicDrinks::tax = tax;
}

AlcoholicDrinks::AlcoholicDrinks(string name, string type, double price, int quantity, double volume,
                                 double tax) : Drinks(name, type, price, quantity) {
    setVolume(volume);
    setTax(tax);
}

double AlcoholicDrinks::calculatePrice() {
    return (getQuantity() * (getPrice() + getTax()));
}

void AlcoholicDrinks::print() {
    cout << endl;
    cout << "Name: " << getName() << endl;
    cout << "Type: " << getType() << endl;
    cout << "Price: " << getPrice() << " BGN" << endl;
    cout << "Quantity: " << getQuantity() << " pcs." << endl;
    cout << "Volume: " << getVolume() << " l." << endl;
    cout << "Tax: " << getTax() << " BGN" << endl;
    cout << "Final price: " << calculatePrice() << " BGN" << endl;
}

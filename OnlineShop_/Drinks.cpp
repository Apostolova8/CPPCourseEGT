//
// Created by Annie on 22.1.2024 г..
//

#include "Drinks.h"
#include <iostream>

using namespace std;


const string &Drinks::getName() const {
    return name;
}

void Drinks::setName(const string &name) {
    Drinks::name = name;
}

double Drinks::getPrice() const {
    return price;
}

void Drinks::setPrice(double price) {
    Drinks::price = price;
}

int Drinks::getQuantity() const {
    return quantity;
}

void Drinks::setQuantity(int quantity) {
    Drinks::quantity = quantity;
}

void Drinks::print() {
    cout << "Name: " << getName() << endl;
    cout << "Price: " << getPrice() << "BGN" << endl;
    cout << "Quantity: " << getQuantity() << "br." << endl;
}

Drinks::Drinks(string name, double price, int quantity) {
    setName(name);
    setPrice(price);
    setQuantity(quantity);
}

bool Drinks::operator==(Drinks const& b)
{
    return this->name == b.name && this->price == b.price && this->quantity == quantity;
}
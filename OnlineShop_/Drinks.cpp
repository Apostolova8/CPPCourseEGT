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
   return print();
}

Drinks::Drinks(string name, string type, double price, int quantity) {
    setName(name);
    setType(type);
    setPrice(price);
    setQuantity(quantity);
}

double Drinks::calculatePrice() {
    return 0;
}

const string &Drinks::getType() const {
    return type;
}

void Drinks::setType(const string &type) {
    Drinks::type = type;
}



//
// Created by Annie on 23.1.2024 г..
//

#include "Foods.h"

const string &Food::Food::getName() const {
    return name;
}

void Food::Food::setName(const string &name) {
    Food::name = name;
}

double Food::Food::getPrice() const {
    return price;
}

void Food::Food::setPrice(double price) {
    Food::price = price;
}

int Food::Food::getQuantity() const {
    return quantity;
}

void Food::Food::setQuantity(int quantity) {
    Food::quantity = quantity;
}

double Food::Food::calculatePrice() const {
    return getPrice() * getQuantity();
}

void Food::Food::print() const {
    cout << endl;
    cout << "Name: " << getName() << endl;
    cout << "Type: " << getType() << endl;
    cout << "Price: " << getPrice() << " BGN" << endl;
    cout << "Quantity: " << getQuantity() << " pcs." << endl;
    cout << "Final price: " << calculatePrice() << endl;
}

Food::Food::Food(string name, string type, double price, int quantity) {
    setType(type);
    setName(name);
    setPrice(price);
    setQuantity(quantity);
}

const string &Food::getType() const {
    return type;
}

void Food::setType(const string &type) {
    Food::type = type;
}

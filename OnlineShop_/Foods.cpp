//
// Created by Annie on 23.1.2024 г..
//

#include "Foods.h"

const string &Foods::getName() const {
    return Name;
}

void Foods::setName(const string &name) {
    Name = name;
}

double Foods::getPrice() const {
    return Price;
}

void Foods::setPrice(double price) {
    Price = price;
}

int Foods::getQuantity() const {
    return Quantity;
}

void Foods::setQuantity(int quantity) {
    Quantity = quantity;
}

Foods::Foods(string Name, double Price, int Quantity) {
    setName(Name);
    setPrice(Price);
    setQuantity(Quantity);
}

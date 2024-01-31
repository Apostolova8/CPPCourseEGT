//
// Created by Annie on 19.1.2024 г..
//

#include "Cars.h"

void Cars::print() {
    cout << "Brand: " << getBrand() << endl;
    cout << "Model: " << getModel() << endl;
    cout << "Type: " << getType() << endl;
    cout << "Color: " << getColor() << endl;
    cout << "ID: " << getId() << endl;
    cout << "Number: " << getNumber() << endl;
    cout << "Fuel: " << getFuel() << endl;
    cout << "Tax: " << getTax() << "lv." << endl;
    cout << "Traveled distance: " << getTraveledDistance() << "km" << endl;
}

const string &Cars::getBrand() const {
    return brand;
}

void Cars::setBrand(const string &brand) {
    Cars::brand = brand;
}

const string &Cars::getModel() const {
    return model;
}

void Cars::setModel(const string &model) {
    Cars::model = model;
}

const string &Cars::getType() const {
    return type;
}

void Cars::setType(const string &type) {
    Cars::type = type;
}

const string &Cars::getColor() const {
    return color;
}

void Cars::setColor(const string &color) {
    Cars::color = color;
}

string Cars::getId() const {
    return id;
}

void Cars::setId(string id) {
    Cars::id = id;
}

string Cars::getNumber() const {
    return number;
}

void Cars::setNumber(string number) {
    Cars::number = number;
}

double Cars::getFuel() const {
    return fuel;
}

void Cars::setFuel(double fuel) {
    Cars::fuel = fuel;
}
double Cars::getTax() const {
    return tax;
}

void Cars::setTax(double tax) {
    Cars::tax = tax;
}

double Cars::getTraveledDistance() const {
    return traveledDistance;
}

void Cars::setTraveledDistance(double traveledDistance) {
    Cars::traveledDistance = traveledDistance;
}

Cars::Cars(string brand, string model, string type, string color, string id, string number, double fuel, double tax, double traveledDistance) {
    setBrand(brand);
    setModel(model);
    setType(type);
    setColor(color);
    setId(id);
    setNumber(number);
    setFuel(fuel);
    setTax(tax);
    setTraveledDistance(traveledDistance);
}

Cars::Cars() {}

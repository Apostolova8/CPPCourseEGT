//
// Created by Annie on 18.1.2024 г..
//
#include "Package.h"
#include <string>

using namespace std;


Package::Package(const string& AddressSender, const string& AddressReceiver, int price, double weight) {
    setAddressSender(AddressSender);
    setAddressReceiver(AddressReceiver);
    setPrice(price);
    setWeight(weight);
}

void Package::print()
{

}

double Package::calculateCost() {
    return getPrice() + (getWeight() * fee());
}

double Package::fee() {
    return 2.0;
}

const string &Package::getAddressSender() const {
    return AddressSender;
}

void Package::setAddressSender(const string &addressSender) {
    AddressSender = addressSender;
}

const string &Package::getAddressReceiver() const {
    return AddressReceiver;
}

void Package::setAddressReceiver(const string &addressReceiver) {
    AddressReceiver = addressReceiver;
}

int Package::getPrice() {
    return price;
}

void Package::setPrice(int price) {
    Package::price = price;
}

double Package::getWeight() {
    return weight;
}

void Package::setWeight(double weight) {
    Package::weight = weight;
}

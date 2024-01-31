//
// Created by Annie on 18.1.2024 г..
//
#include "Package.h"
#include <string>

using namespace std;


Package::Package(const string& AddressSender, const string& AddressReceiver, int price, double weight)
        : AddressSender(AddressSender), AddressReceiver(AddressReceiver), price(price), weight(weight) {}

double Package::calculateCost()
{
    return getPrice() * getWeight();
}

void Package::print()
{

}

void Package::setAddressSender()
{
    this->AddressSender = AddressSender;
}

void Package::setAddressReceiver()
{
    this->AddressReceiver = AddressReceiver;
}

void Package::setPrice(int)
{
    this->price = price;
}

void Package::setWeight(double)
{
    this->weight = weight;
}

string Package::getAddressSender()
{
    return this->AddressSender;
}

string Package::getAddressReceiver()
{
    return this->AddressReceiver;
}

int Package::getPrice()
{
    return this->price;
}

double Package::getWeight()
{
    return this->weight;
}
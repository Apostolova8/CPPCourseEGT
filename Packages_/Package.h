//
// Created by Annie on 18.1.2024 г..
//

#ifndef PACKAGES_PACKAGE_H
#define PACKAGES_PACKAGE_H
#include <iostream>
#include "Address.h"

using namespace std;

class Package
{
public:
    Package(const string& AddressSender, const string& AddressReceiver, int price, double weight);
    double calculateCost();
    void print();
    void setAddressSender();
    void setAddressReceiver();
    void setPrice(int);
    void setWeight(double);
    string getAddressSender();
    string getAddressReceiver();
    int getPrice();
    double getWeight();

private:
    string AddressSender;
    string AddressReceiver;
    int price;
    double weight;
};
#endif //PACKAGES_PACKAGE_H

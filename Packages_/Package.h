//
// Created by Annie on 18.1.2024 г..
//

#ifndef PACKAGES_PACKAGE_H
#define PACKAGES_PACKAGE_H
#include <iostream>
#include "Address.h"

using namespace std;

class Package {

public:
    Package(const string& AddressSender, const string& AddressReceiver, int price, double weight);

    virtual double calculateCost();

    void print();

    const string &getAddressSender() const;

    void setAddressSender(const string &addressSender);

    const string &getAddressReceiver() const;

    void setAddressReceiver(const string &addressReceiver);

    int getPrice();

    void setPrice(int price);

    double getWeight();

    void setWeight(double weight);

    double fee();

protected:
    string AddressSender;
    string AddressReceiver;
    int price;
    double weight;
};
#endif //PACKAGES_PACKAGE_H

//
// Created by Annie on 2.2.2024 г..
//

#include "TwoDayPackage.h"
#include "Package.h"

TwoDayPackage::TwoDayPackage(const string &AddressSender, const string &AddressReceiver, int price, double weight)
        : Package(AddressSender, AddressReceiver, price, weight) {
    //virtual double calculateCost() override;
    this->feeTwoDayPackage = 3; //fee for two day packages will be 3 BGN
}

double TwoDayPackage::calculateCost() {
    return getPrice() + getFeeTwoDayPackage();
}

void TwoDayPackage::print() {
    Package::print();
}

std::ostream &operator<<(ostream &os, TwoDayPackage &package) {
        os << "Address of sender: " << package.getAddressSender() << endl;
        os << "Address of receiver: " << package.getAddressReceiver() << endl;
        os << "Price of product: " << package.getPrice() << " BGN" << endl;
        os << "Weight of package: " << package.getWeight() << " kg" << endl;
        os << "Taxes: " << package.getFeeTwoDayPackage() << " BGN" << endl;
        os << "Final price with taxes: " << package.calculateCost() << " BGN" << endl;
        return os;
    }

double TwoDayPackage::getFeeTwoDayPackage() const {
    return feeTwoDayPackage;
}

void TwoDayPackage::setFeeTwoDayPackage(double feeTwoDayPackage) {
    TwoDayPackage::feeTwoDayPackage = feeTwoDayPackage;
}



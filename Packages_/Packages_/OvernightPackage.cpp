//
// Created by Annie on 2.2.2024 г..
//

#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(const string &AddressSender, const string &AddressReceiver, int price, double weight)
        : Package(AddressSender, AddressReceiver, price, weight) {
    //virtual double calculateCost() override;
    this->feeOvernightPackage = 5; //fee for two day packages will be 1BGN more than normal package
}

double OvernightPackage::calculateCost() {
    return getPrice() + getFeeOvernightPackage();
}

void OvernightPackage::print() {
    Package::print();
}

std::ostream &operator<<(ostream &os, OvernightPackage &package) {
    os << "Address of sender: " << package.getAddressSender() << endl;
    os << "Address of receiver: " << package.getAddressReceiver() << endl;
    os << "Price of product: " << package.getPrice() << " BGN" << endl;
    os << "Weight of package: " << package.getWeight() << " kg" << endl;
    os << "Taxes: " << package.getFeeOvernightPackage() << " BGN" << endl;
    os << "Final price with taxes: " << package.calculateCost() << " BGN" << endl;
    return os;
}

double OvernightPackage::getFeeOvernightPackage() const {
    return feeOvernightPackage;
}

void OvernightPackage::setFeeOvernightPackage(double feeOvernightPackage) {
    OvernightPackage::feeOvernightPackage = feeOvernightPackage;
}


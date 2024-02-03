//
// Created by Annie on 2.2.2024 г..
//

#ifndef PACKAGES_TWODAYPACKAGE_H
#define PACKAGES_TWODAYPACKAGE_H
#include "Package.h"

using namespace std;

class TwoDayPackage : public Package {

public:
    TwoDayPackage(const string& AddressSender, const string& AddressReceiver, int price, double weight);

    virtual double calculateCost() override;

    void print();

    friend std::ostream& operator<<(ostream& os, TwoDayPackage& package);

    double getFeeTwoDayPackage() const;

    void setFeeTwoDayPackage(double feeTwoDayPackage);

private:
    double feeTwoDayPackage;

};


#endif //PACKAGES_TWODAYPACKAGE_H

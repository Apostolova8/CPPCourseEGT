//
// Created by Annie on 2.2.2024 г..
//

#ifndef PACKAGES_OVERNIGHTPACKAGE_H
#define PACKAGES_OVERNIGHTPACKAGE_H
#include "Package.h"

using namespace std;

class OvernightPackage : public Package {

public:
    OvernightPackage(const string& AddressSender, const string& AddressReceiver, int price, double weight);

    virtual double calculateCost() override;

    void print();

    friend std::ostream& operator<<(ostream& os, OvernightPackage& package);

private:
public:
    double getFeeOvernightPackage() const;

    void setFeeOvernightPackage(double feeOvernightPackage);

private:
    double feeOvernightPackage;
};


#endif //PACKAGES_OVERNIGHTPACKAGE_H

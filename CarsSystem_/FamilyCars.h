//
// Created by Annie on 19.1.2024 г..
//

#ifndef CARSSYSTEM_FAMILYCARS_H
#define CARSSYSTEM_FAMILYCARS_H
#include "Cars.h"
#include <iostream>

using namespace std;

class FamilyCars : public Cars {

public:

    FamilyCars(string unnamed, string unnamed1, string unnamed2, string unnamed3, string unnamed4,
               string unnamed5, double unnamed6, double unnamed7, double unnamed8, double familyTax, Cars);

    double getFamilyTax() const;

    void setFamilyTax(double familyTax);

    FamilyCars() = default;

    double calculateTax();

    virtual void print();

private:

    double familyTax;
    Cars cars;
};



#endif //CARSSYSTEM_FAMILYCARS_H

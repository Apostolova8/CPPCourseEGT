//
// Created by Annie on 19.1.2024 г..
//

#ifndef CARSSYSTEM_LUXURYCARS_H
#define CARSSYSTEM_LUXURYCARS_H
#include <iostream>
#include <string>
#include "Cars.h"

using namespace std;

class LuxuryCars : public Cars {

public:

    LuxuryCars(string unnamed, string unnamed1, string unnamed2, string unnamed3, string unnamed4,
               string unnamed5, double unnamed6, double unnamed7, double unnamed8, double luxuryTax, Cars);

    double getLuxuryTax() const;

    void setLuxuryTax(double luxuryTax);

    LuxuryCars() = default;

    double calculateTax();

    virtual void print();

    void displayLuxuryCoeff();

    void chooseLuxuryCoeff(const string& selectedExtra);

private:

    double luxuryTax;
    double luxuryCoeff;
    Cars cars;
};


#endif //CARSSYSTEM_LUXURYCARS_H

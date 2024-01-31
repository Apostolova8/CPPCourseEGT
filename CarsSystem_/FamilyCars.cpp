//
// Created by Annie on 19.1.2024 г..
//

#include "FamilyCars.h"
#include "Cars.h"
#include <iostream>

using namespace std;

void FamilyCars::print() {
    cout << "New Family car in car system." << endl;
}

double FamilyCars::getFamilyTax() const {
    return familyTax;
}

void FamilyCars::setFamilyTax(double FamilyTax) {
    FamilyCars::familyTax = familyTax;
}

double FamilyCars::calculateTax() {
    if (getTraveledDistance() < 500 ){
        return getTax() * 0.7; }
    if (getTraveledDistance() >= 500){
        return getTax() * 0.4;
    }
}

FamilyCars::FamilyCars(string unnamed, string unnamed1, string unnamed2, string unnamed3, string unnamed4,
                       string unnamed5, double unnamed6, double unnamed7, double unnamed8, double familyTax,
                       Cars a) : Cars(unnamed, unnamed1, unnamed2, unnamed3, unnamed4, unnamed5, unnamed6, unnamed7,
                                      unnamed8), cars(a) {
    setFamilyTax(familyTax);
}


//
// Created by Annie on 19.1.2024 г..
//

#include "LuxuryCars.h"
#include "Cars.h"
#include <iostream>

using namespace std;

void LuxuryCars::print() {
    cout << "New Luxury car in car system." << endl;
}

double LuxuryCars::getLuxuryTax() const {
    return luxuryTax;
}

void LuxuryCars::setLuxuryTax(double LuxuryTax) {
    LuxuryCars::luxuryTax = LuxuryTax;
}

LuxuryCars::LuxuryCars(string unnamed, string unnamed1, string unnamed2, string unnamed3, string unnamed4,
                       string unnamed5, double unnamed6, double unnamed7, double unnamed8, double luxuryTax,
                       Cars a) : Cars(unnamed, unnamed1, unnamed2, unnamed3, unnamed4, unnamed5, unnamed6, unnamed7,
                                      unnamed8), cars(a) {
    setLuxuryTax(luxuryTax);
}

void LuxuryCars::displayLuxuryCoeff() {
    cout << endl;
    cout << "Choose an extra option: " << endl;
    cout << "1. Champagne: 100lv." << endl;
    cout << "2. Wine: 50lv." << endl;
    cout << "3. Chocolate: 40lv." << endl;
    cout << "4. No, thank you! " << endl;
}

double LuxuryCars::calculateTax() {
    if (getTraveledDistance() < 200 ){
        return getTax() * 0.6 + luxuryCoeff; }
    if (getTraveledDistance() >= 200) {
        return getTax() * 0.4 + luxuryCoeff;
    }
}

void LuxuryCars::chooseLuxuryCoeff(const string &selectedExtra) {

    if (selectedExtra == "Champagne") {
        luxuryCoeff += 100.0;
    } else if (selectedExtra == "Wine") {
        luxuryCoeff += 50.0;
    } else if (selectedExtra == "Chocolate") {
        luxuryCoeff += 40.0;
    } else if (selectedExtra == "No, thanks! ") {
        luxuryCoeff += 0.0;
    } else {
        luxuryCoeff += 0.0;
    }

}




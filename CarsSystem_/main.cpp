#include <iostream>
#include "Cars.h"
#include "FamilyCars.h"
#include "LuxuryCars.h"

using namespace std;

int main() {

    FamilyCars my;
    my.print();
    Cars car1 ("Peugeot", "206cc", "Combi", "green", "KS725sd", "EH 2750 KC", 25.5, 50.5, 500.23);
    car1.print();

    FamilyCars myCar;
    myCar.setTraveledDistance(300);
    myCar.setTax(500);
    double taxResult = myCar.calculateTax();
    cout << "Your tax for using Family car is: " << taxResult << "BGN" << endl;

    cout << endl;

    LuxuryCars my2;
    my2.print();
    Cars car2 ("Toyota", "Hybrid", "Sedan", "blue", "7hKs91", "CB 7652 KP", 30.2, 55, 1158);
    car2.print();
    LuxuryCars lux;
    lux.displayLuxuryCoeff();

    string selectedExtra;
    cout << "Enter your choice: ";
    cin >> selectedExtra;

    LuxuryCars myCar2;
    myCar2.setTraveledDistance(700);
    myCar2.setTax(1000);
/*    double taxRe = myCar.calculateTax();
    cout << "Your tax for using Luxury car is: " << taxRe << "BGN" << endl;*/

    double luxuryCoeff = 0;

    lux.chooseLuxuryCoeff(selectedExtra);

    double taxResult2 = myCar2.calculateTax() + luxuryCoeff;

    cout << "Your tax for using Luxury car is: " << taxResult2 << "lv." << endl;

    return 0;
}



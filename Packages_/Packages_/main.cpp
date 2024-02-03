#include <iostream>
#include <vector>
#include "Address.h"
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

using namespace std;

int main() {

    Address* sPtr1 = new Address("Ana", "Sofia", "bul. Hristo Botev 12", "0876619312");
    //Address* sPtr2 = new Address("Maria", "Pleven", "ul. Grenaderska 27", "0826488163");

    vector<Address*> myAddress;
    myAddress.push_back(sPtr1);
    //myAddress.push_back(sPtr2);
    sPtr1->print();
    //sPtr2->print();

    //package recipient info:
    for (int i = 0; i < myAddress.size(); i++) {
        myAddress.at(i)->print();
        cout << "Name: " << myAddress.at(i)->getName() << endl;
        cout << "City: " << myAddress.at(i)->getCity() << endl;
        cout << "Street: " << myAddress.at(i)->getStreet() << endl;
        cout << "Phone number: " << myAddress.at(i)->getPhoneNumber() << endl;
        cout << endl;
    }

    //Normal packages:
    Package* sPtr3 = new Package("ul. Srebarna 12A", "bul. Hristo Botev 56", 35, 1.5);
    //Package* sPtr4 = new Package("ul. Boris Stefanov 2", "bul. Hristo Botev 56", 150, 2.0);

    vector<Package*> myPackage;
    myPackage.push_back(sPtr3);
    //myPackage.push_back(sPtr4);
    sPtr3->print();
    //sPtr4->print();

    for (int i = 0; i < myPackage.size(); i++) {
        myPackage.at(i)->print();
        cout << "Normal packages: " << endl;
        cout << "Address of sender: " << myPackage.at(i)->getAddressSender() << endl;
        cout << "Address of receiver: " << myPackage.at(i)->getAddressReceiver() << endl;
        cout << "Price of product: " << myPackage.at(i)->getPrice() << " BGN" << endl;
        cout << "Weight of package: " << myPackage.at(i)->getWeight() << " kg" << endl;
        cout << "Taxes: " << myPackage.at(i)->fee() << " BGN" << endl;
        cout << "Final price with taxes: " << myPackage.at(i)->calculateCost() << " BGN" << endl;
    }

    //Two day and overnight packages:
    TwoDayPackage twoDayPackage("bul. Tsar Boris III", "bul. Hristo Botev 56", 15.0, 0.2);
    OvernightPackage overnightPackage("ul. Opalchenska", "bul. Hristo Botev 56", 30.0, 1.3);

    myPackage.push_back(&twoDayPackage);
    cout << endl;
    cout << "Two day packages: " << endl;
    cout << twoDayPackage << endl;
    myPackage.push_back(&overnightPackage);
    cout << endl;
    cout << "Overnight packages: " << endl;
    cout << overnightPackage << endl;

    //Total sum of all packages amounts:
    double totalSum = 0.0;
    for (int i = 0; i < myPackage.size(); i++) {
        myPackage.at(i)->print();
        double packageAmount = myPackage.at(i)->calculateCost();
        totalSum += packageAmount;
    }
    cout << "Final amount for all packages: " << totalSum << " BGN" << endl;
    return 0;
}
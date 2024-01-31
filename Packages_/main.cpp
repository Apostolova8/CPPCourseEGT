#include <iostream>
#include <vector>
#include "Address.h"
#include "Package.h"

using namespace std;

int main() {

    Address* sPtr1 = new Address("John", "Sofia", "Hristo Botev 12", "0876619312");

    vector<Address*> myAddress;
    myAddress.push_back(sPtr1);

    sPtr1->print();

    for (int i = 0; i < myAddress.size(); i++) {
        myAddress.at(i)->print();
        cout << "Name: " << myAddress.at(i)->getName() << endl;
        cout << "City: " << myAddress.at(i)->getCity() << endl;
        cout << "Street: " << myAddress.at(i)->getStreet() << endl;
        cout << "Phone number: " << myAddress.at(i)->getPhoneNumber() << endl;
        cout << endl;
    }

    Package* sPtr2 = new Package("ul. Srebarna 12A", "bul. Hristo Botev 56", 35, 1.5);

    vector<Package*> myPackage;
    myPackage.push_back(sPtr2);

    sPtr2->print();

    for (int i = 0; i < myPackage.size(); i++) {
        myPackage.at(i)->print();
        cout << "Address of sender: " << myPackage.at(i)->getAddressSender() << endl;
        cout << "Address of receiver: " << myPackage.at(i)->getAddressReceiver() << endl;
        cout << "Price of package: " << myPackage.at(i)->getPrice() << "BGN" << endl;
        cout << "Weight of package: " << myPackage.at(i)->getWeight() << "kg" << endl;
    }
    return 0;
}
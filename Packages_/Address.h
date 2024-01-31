//
// Created by Annie on 18.1.2024 г..
//

#ifndef PACKAGES_ADDRESS_H
#define PACKAGES_ADDRESS_H
#include <iostream>
#include <string>

using namespace std;

class Address
{
public:

    Address(string name, string city, string street, string phoneNumber);

    void print();

    const string &getName() const;

    void setName(const string &name);

    const string &getCity() const;

    void setCity(const string &city);

    const string &getStreet() const;

    void setStreet(const string &street);

    const string &getPhoneNumber() const;

    void setPhoneNumber(const string &phoneNumber);

private:
    string phoneNumber;
    string name;
    string city;
    string street;

};
#endif //PACKAGES_ADDRESS_H

//
// Created by Annie on 18.1.2024 г..
//
#include "Address.h"

Address::Address(string name, string city, string street, string phoneNumber)
{
    setName(name);
    setCity(city);
    setStreet(street);
    setPhoneNumber(phoneNumber);
}

void Address::print()
{

}

const string &Address::getName() const {
    return name;
}

void Address::setName(const string &name) {
    Address::name = name;
}

const string &Address::getCity() const {
    return city;
}

void Address::setCity(const string &city) {
    Address::city = city;
}

const string &Address::getStreet() const {
    return street;
}

void Address::setStreet(const string &street) {
    Address::street = street;
}

const string &Address::getPhoneNumber() const {
    return phoneNumber;
}

void Address::setPhoneNumber(const string &phoneNumber) {
    Address::phoneNumber = phoneNumber;
}



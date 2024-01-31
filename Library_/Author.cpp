//
// Created by Annie on 19.1.2024 г..
//
#include "Author.h"

Author::Author(string firstName, string lastName, string nationality) {
    setFirstName(firstName);
    setLastName(lastName);
    setNationality(nationality);
}

void Author::print() {
    cout << "Author's first name is: " << getFirstName() << "." << endl;
    cout << "Author's last name is: " << getLastName() << "." << endl;
    cout << "Author's nationality is: " << getNationality() << "." << endl;
    cout << endl;
}

void Author::setFirstName(string firstName) {
    this->firstName=firstName;
}

string Author::getFirstName() {
    return this->firstName;
}

void Author::setLastName(string lastName) {
    this->lastName=lastName;
}

string Author::getLastName() {
    return this->lastName;
}

void Author::setNationality(string nationality) {
    this->nationality=nationality;
}

string Author::getNationality() {
    return this->nationality;
}




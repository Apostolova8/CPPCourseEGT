//
// Created by Annie on 19.1.2024 г..
//

#ifndef LIBRARY_AUTHOR_H
#define LIBRARY_AUTHOR_H
#include <string>
#include <iostream>

using namespace std;

class Author {

public:

    Author(string,string,string);

    virtual void print();

    void setFirstName(string);

    string getFirstName();

    void setLastName(string);

    string getLastName();

    void setNationality(string);

    string getNationality();

private:

    string firstName;
    string lastName;
    string nationality;


};
#endif //LIBRARY_AUTHOR_H

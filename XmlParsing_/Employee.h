//
// Created by Annie on 13.2.2024 г..
//

#ifndef XMLPARSING_EMPLOYEE_H
#define XMLPARSING_EMPLOYEE_H
#include <string>
#include <ostream>
#include "Workstation.h"

using namespace std;

class Employee {

public:
    Employee(string, string, int, Workstation*);

    static Employee  *parseEmployee(pugi::xml_node);

    friend ostream &operator<<(ostream &os, const Employee &employee);

private:
    string name;
    string type;
    int age;
    Workstation* workstation;
};


#endif //XMLPARSING_EMPLOYEE_H

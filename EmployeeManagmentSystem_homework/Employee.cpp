//
// Created by Annie on 31.1.2024 г..
//

#include "Employee.h"

const string &Employee::getName() const {
    return name;
}

void Employee::setName(const string &name) {
    Employee::name = name;
}

const string &Employee::getEmployeeId() const {
    return employeeID;
}

void Employee::setEmployeeId(const string &employeeId) {
    employeeID = employeeId;
}

const string &Employee::getPosition() const {
    return position;
}

void Employee::setPosition(const string &position) {
    Employee::position = position;
}

void Employee::display() const {
    cout << "Name: " << this->getName() << endl;
    cout << "ID: " << this->getEmployeeId() << endl;
    cout << "Position: " << this->getPosition() << endl;
}

Employee::Employee(string name, string employeeID, string position) {
    setName(name);
    setEmployeeId(employeeID);
    setPosition(position);
}

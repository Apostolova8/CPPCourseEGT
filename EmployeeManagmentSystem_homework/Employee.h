//
// Created by Annie on 31.1.2024 г..
//

#ifndef EMPLOYEEMANAGMENTSYSTEM_HOMEWORK_EMPLOYEE_H
#define EMPLOYEEMANAGMENTSYSTEM_HOMEWORK_EMPLOYEE_H
#include <iostream>

using namespace std;

class Employee {

public:
    Employee(string, string, string);

    const string &getName() const;

    void setName(const string &name);

    const string &getEmployeeId() const;

    void setEmployeeId(const string &employeeId);

    const string &getPosition() const;

    void setPosition(const string &position);

    void display() const;

private:
    string name;
    string employeeID;
    string position;
};


#endif //EMPLOYEEMANAGMENTSYSTEM_HOMEWORK_EMPLOYEE_H

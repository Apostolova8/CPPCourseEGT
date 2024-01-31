//
// Created by Annie on 31.1.2024 г..
//

#ifndef EMPLOYEEMANAGMENTSYSTEM_HOMEWORK_DEPARTMENT_H
#define EMPLOYEEMANAGMENTSYSTEM_HOMEWORK_DEPARTMENT_H
#include <iostream>
#include <vector>
#include "Employee.h"

using namespace std;

class Department {

public:
    Department(string);

    const string &getDepartmentName() const;

    void setDepartmentName(const string &departmentName);

    int getNumEmployees() const;

    void setNumEmployees(int numEmployees);

    void addEmployee(Employee employee);

    void displayEmployee() const;

private:
    string departmentName;
    int numEmployees;
    vector<Employee> employees;
};



#endif //EMPLOYEEMANAGMENTSYSTEM_HOMEWORK_DEPARTMENT_H

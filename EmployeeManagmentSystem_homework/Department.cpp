//
// Created by Annie on 31.1.2024 г..
//

#include "Department.h"

const string &Department::getDepartmentName() const {
    return departmentName;
}

void Department::setDepartmentName(const string &departmentName) {
    Department::departmentName = departmentName;
}

int Department::getNumEmployees() const {
    return numEmployees;
}

void Department::setNumEmployees(int numEmployees) {
    Department::numEmployees = numEmployees;
}

Department::Department(string departmentName) {
    setDepartmentName(departmentName);
}

void Department::addEmployee(Employee employee) {
    employees.push_back(employee);  //adding an employee object to the employees vector in the Department class
}

void Department::displayEmployee() const {
    cout << "Employees in the department: " << this->getDepartmentName() << ": " << endl;
    for (const auto& employee : employees) {    //iterating over each element in the employees vector
        cout << "Name: " << employee.getName() << ", Employee ID: " << employee.getEmployeeId() << endl;    //get employee info
    }
}



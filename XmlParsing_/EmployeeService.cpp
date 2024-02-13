//
// Created by Annie on 13.2.2024 г..
//

#include "EmployeeService.h"
#include <iostream>
#include "pugixml.h"

using namespace std;

pugi::xml_document EmployeeService::doc;
vector<Employee*> EmployeeService::employeesList;

void EmployeeService::parseEmployeesData() {
    //open file
    //go to Employees node
    //loop through all Employee
    //read the Employee node -> parseEmployee ; returns employee (Employee object)
    //add employee object to vector
    if (!doc.load_file("employees.xml")) {
        cout << "Exception" << endl;
        return;
    }
    pugi::xml_node employees = doc.child("EmployeesData").child("Employees");
/*
    for (pugi::xml_node employee = employees.child("Employee");
                        employee; //dokato go ima, cikulut da se varti
                        employee = employee.next_sibling("Employee")) {    //sledvasht employee
    }
*/


for(auto employee: employees){
    Employee *ePtr = Employee::parseEmployee(employee);
    employeesList.push_back(ePtr);
}
}

vector<Employee *> EmployeeService::getEmployeesList() {
    return employeesList;
}



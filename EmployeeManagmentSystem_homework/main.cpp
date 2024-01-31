#include <iostream>
#include "Department.h"
#include "Employee.h"

int main() {

    Employee a1("Ana", "1e23", "junior");   //objects of class Employee
    Employee a2("Maria", "2k87", "mid");
    Employee a3("Ivan", "9l12", "mid");
    Employee a4("Konstantin", "7y32", "senior");
    Employee a5("Kosara", "8m40", "junior");

    Department department("Architectural"); //object of class Department

    department.addEmployee(a1); //call function to add employees to department
    department.addEmployee(a2);
    department.addEmployee(a3);
    department.addEmployee(a4);
    department.addEmployee(a5);

    department.displayEmployee();   //call function to display all of the employees

    return 0;
}

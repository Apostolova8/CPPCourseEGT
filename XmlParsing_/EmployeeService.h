//
// Created by Annie on 13.2.2024 г..
//

#ifndef XMLPARSING_EMPLOYEESERVICE_H
#define XMLPARSING_EMPLOYEESERVICE_H
#include "pugixml.h"
#include "Employee.h"
#include <vector>
#include <ostream>

class EmployeeService {

public:
    static void parseEmployeesData();

    static vector<Employee*> getEmployeesList();

private:
    static vector<Employee*> employeesList;
    static pugi::xml_document doc;
};


#endif //XMLPARSING_EMPLOYEESERVICE_H

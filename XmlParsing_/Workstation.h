//
// Created by Annie on 13.2.2024 г..
//

#ifndef XMLPARSING_WORKSTATION_H
#define XMLPARSING_WORKSTATION_H
#include "pugixml.h"

using namespace std;

class Workstation {

public:
    Workstation(int, int, int);

    static Workstation *parseWorkstation(pugi::xml_node); //static f-q, koqto se vika bez da ima obekti i tq e obshta za klasa

    friend ostream &operator<<(ostream &os, const Workstation &workstation);

private:
    int building;
    int floor;
    int desc;
};


#endif //XMLPARSING_WORKSTATION_H

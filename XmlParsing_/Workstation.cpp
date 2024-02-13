//
// Created by Annie on 13.2.2024 г..
//

#include "Workstation.h"
#include <iostream>

using namespace std;

Workstation::Workstation(int building, int floor, int desc) {
    this->building = building;
    this->floor = floor;
    this->desc = desc;
}

Workstation *Workstation::parseWorkstation(pugi::xml_node workstationNode) {    //node ot xml-a
    int b = workstationNode.attribute("Building").as_int();
    int f = workstationNode.attribute("Floor").as_int();
    int d = workstationNode.attribute("Desc").as_int();

    return new Workstation(b,f,d);  //adres, kudeto se suzdava tozi obekt
}

ostream &operator<<(ostream &os, const Workstation &workstation) {
    os << "Building: " << workstation.building << " Floor: " << workstation.floor << " Desc: " << workstation.desc;
    return os;
}

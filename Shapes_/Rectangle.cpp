//
// Created by Annie on 28.1.2024 г..
//

#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(int a, int size, int position, string Sh, char Ch, int sideB) : TwoDimShape(a, size, position, Sh, Ch)
{
    setSideB(sideB);
}

void Rectangle::print()
{
    cout << "We are in Rectangle print" << endl;
    //TwoDimShape::print();
}

double Rectangle::getArea() const {
    //cout << "We are in getArea Rectangle" << endl;
    return Rectangle::getSideB() * Shape::getA();
}

void Rectangle::setSideB(int b)
{
    this->sideB = b;
}

int Rectangle::getSideB() const {
    return this->sideB;
}

Rectangle Rectangle::operator+(const Rectangle &other) const {
    cout << "Rectangle 1 area is: " << getArea() << endl;
    cout << "Rectangle 2 area is: " << other.getArea() << endl;

    if (getArea() > other.getArea()) {
        cout << "True: rec1>rec2 " << endl;
    } else {
        cout << "False: rec1<=rec2 " << endl;
    }
}



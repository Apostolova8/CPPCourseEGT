//
// Created by Annie on 28.1.2024 г..
//

#include <iostream>
#include "Shape.h"

using namespace std;

Shape::Shape(int side) {
    this->a = side;
}
void Shape::setA(int side) {
    this->a = side;
}
int Shape::getA() const{
    return a;
}
void Shape::print() {
    cout << "In shape the side is: " << this->a << endl;
}
double Shape::getArea() {
    cout << "In shape the area is: " << endl;
    return 0.0;
}

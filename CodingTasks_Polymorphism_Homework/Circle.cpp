//
// Created by Annie on 16.2.2024 г..
//

#include "Circle.h"

void Circle::draw() {
    cout << "Drawing a " << getColor() << " circle" << "." << endl;
}

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double radius) {
    Circle::radius = radius;
}


double Circle::area() const {
    return (3.14 * getRadius() * getRadius());  //area formula for circle ->  π × r2
}

Circle::Circle(double radius, const string &color) : Shape(color) {
    setRadius(radius);
}

Circle::~Circle() {

}

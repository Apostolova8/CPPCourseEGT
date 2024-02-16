//
// Created by Annie on 16.2.2024 г..
//

#include "Circle.h"

using namespace std;

Circle::Circle(double radius) {
    setRadius(radius);
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


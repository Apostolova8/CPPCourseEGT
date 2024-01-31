//
// Created by Annie on 27.1.2024 г..
//

#include "Box.h"

using namespace std;

double Box::getWidth() const {
    return width;
}

void Box::setWidth(double width) {
    Box::width = width;
}

double Box::getLength() const {
    return length;
}

void Box::setLength(double length) {
    Box::length = length;
}

double Box::getHeight() const {
    return height;
}

void Box::setHeight(double height) {
    Box::height = height;
}

Box::Box(double width, double lenght, double height) : width(width), length(lenght), height(height) {

}

Box Box::operator+(const Box &other) const {
    double width1 = (width > other.width) ? width : other.width;
    double length2 = (length > other.length) ? length : other.length;
    double height3 = height + other.height;

    return Box(width1, length2, height3);
}

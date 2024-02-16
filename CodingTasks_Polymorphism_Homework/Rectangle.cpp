//
// Created by Annie on 16.2.2024 г..
//

#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(double width, double height) {
    setWidth(width);
    setHeight(height);
}

double Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(double width) {
    Rectangle::width = width;
}

double Rectangle::getHeight() const {
    return height;
}

void Rectangle::setHeight(double height) {
    Rectangle::height = height;
}

double Rectangle::area() const {
    return getWidth() * getHeight();    //area formula for rectangle -> width * height
}


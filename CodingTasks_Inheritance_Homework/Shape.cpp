//
// Created by Annie on 16.2.2024 г..
//

#include "Shape.h"


Shape::Shape(string color) {
    setColor(color);
}

const string &Shape::getColor() const {
    return color;
}

void Shape::setColor(const string &color) {
    Shape::color = color;
}

void Shape::draw() {
    cout << "Drawing a " << getColor() << " shape" << "." << endl;
}



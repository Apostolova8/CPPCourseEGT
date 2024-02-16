//
// Created by Annie on 16.2.2024 г..
//

#ifndef CODINGTASKS_INHERITANCE_HOMEWORK_RECTANGLE_H
#define CODINGTASKS_INHERITANCE_HOMEWORK_RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape {

public:
    Rectangle(const string& color) : Shape(color) {}

    void draw() override;
};


#endif //CODINGTASKS_INHERITANCE_HOMEWORK_RECTANGLE_H

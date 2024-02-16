//
// Created by Annie on 16.2.2024 г..
//

#ifndef CODINGTASKS_INHERITANCE_HOMEWORK_CIRCLE_H
#define CODINGTASKS_INHERITANCE_HOMEWORK_CIRCLE_H
#include "Shape.h"

class Circle : public Shape {

public:
    Circle(const string& color) : Shape(color) {}   //inheritance

    void draw() override;       //override function
};


#endif //CODINGTASKS_INHERITANCE_HOMEWORK_CIRCLE_H

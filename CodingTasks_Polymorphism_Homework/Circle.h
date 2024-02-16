//
// Created by Annie on 16.2.2024 г..
//

#ifndef CODINGTASKS_POLYMORPHISM_HOMEWORK_CIRCLE_H
#define CODINGTASKS_POLYMORPHISM_HOMEWORK_CIRCLE_H
#include "Shape.h"

class Circle : public Shape {

public:
    Circle(double);     //constructor

    double area() const override;   //override function

    //set and get methods for radius:

    double getRadius() const;

    void setRadius(double radius);

private:
    double radius;
};


#endif //CODINGTASKS_POLYMORPHISM_HOMEWORK_CIRCLE_H

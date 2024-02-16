//
// Created by Annie on 16.2.2024 г..
//

#ifndef CODINGTASKS_INHERITANCE_HOMEWORK_CIRCLE_H
#define CODINGTASKS_INHERITANCE_HOMEWORK_CIRCLE_H
#include "Shape.h"

class Circle : public Shape {

public:
    Circle(double radius, const string& color);   //inheritance

    virtual ~Circle();

    void draw() override;       //override function

    double area() const override;   //override function

    //set and get methods for radius:

    double getRadius() const;

    void setRadius(double radius);

private:
    double radius;
};


#endif //CODINGTASKS_INHERITANCE_HOMEWORK_CIRCLE_H

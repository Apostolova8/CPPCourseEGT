//
// Created by Annie on 28.1.2024 г..
//

#ifndef SHAPES_RECTANGLE_H
#define SHAPES_RECTANGLE_H
#include "TwoDimShape.h"
#include <string>

using namespace std;

class Rectangle : public TwoDimShape {

public:

    Rectangle(int, int, int, string, char, int); //Constructor s dop. argument

    Rectangle operator+(const Rectangle& other) const;

    void print();
    double getArea() const;
    void setSideB(int);
    int getSideB() const;

private:

    int sideB;
};

#endif //SHAPES_RECTANGLE_H

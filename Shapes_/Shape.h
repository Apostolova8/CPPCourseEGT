//
// Created by Annie on 28.1.2024 г..
//

#ifndef SHAPES_SHAPE_H
#define SHAPES_SHAPE_H


#include <iostream>

using namespace std;

class Shape {

public:
    Shape(int);
    virtual double getArea();
    void setA(int);
    int getA() const;
    virtual void print();

private:
    int a;
};


#endif //SHAPES_SHAPE_H

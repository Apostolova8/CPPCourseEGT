//
// Created by Annie on 28.1.2024 г..
//

#ifndef SHAPES_THREEDIMSHAPE_H
#define SHAPES_THREEDIMSHAPE_H


#include <iostream>
#include "Shape.h"

using namespace std;

class ThreeDimShape : public Shape {

public:
    ThreeDimShape(int, int); // purvo za a, posle za h
    virtual void print();
    virtual double getArea();
    double getVolume();
    //void setH(int);
    //int getH();

private:
    int h;
};



#endif //SHAPES_THREEDIMSHAPE_H

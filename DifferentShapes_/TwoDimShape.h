//
// Created by Annie on 4.2.2024 г..
//

#ifndef DIFFERENTSHAPES__TWODIMSHAPE_H
#define DIFFERENTSHAPES__TWODIMSHAPE_H
#include "Shape.h"

class TwoDimShape : public Shape {

public:
    TwoDimShape(double, double);

    double getArea() override;

    double getA() const;

    void setA(double a);

    double getB() const;

    void setB(double b);

private:
    double a; //strana 1
    double b; //strana 2
};


#endif //DIFFERENTSHAPES__TWODIMSHAPE_H

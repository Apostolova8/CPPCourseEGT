//
// Created by Annie on 4.2.2024 г..
//

#ifndef DIFFERENTSHAPES__THREEDIMSHAPE_H
#define DIFFERENTSHAPES__THREEDIMSHAPE_H
#include "Shape.h"

class ThreeDimShape : public Shape {

public:
    ThreeDimShape(double, double, double);

    double getArea() override;

    double getVolume() override;

    double getA() const;

    void setA(double a);

    double getB() const;

    void setB(double b);

    double getH() const;

    void setH(double h);

private:
    double a; //strana 1
    double b; //strana 2
    double h; //visochina
};


#endif //DIFFERENTSHAPES__THREEDIMSHAPE_H

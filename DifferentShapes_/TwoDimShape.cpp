//
// Created by Annie on 4.2.2024 г..
//

#include "TwoDimShape.h"

double TwoDimShape::getA() const {
    return a;
}

void TwoDimShape::setA(double a) {
    TwoDimShape::a = a;
}

double TwoDimShape::getB() const {
    return b;
}

void TwoDimShape::setB(double b) {
    TwoDimShape::b = b;
}

TwoDimShape::TwoDimShape(double a, double b) {
    setA(a);
    setB(b);
}

double TwoDimShape::getArea() {
    return a * b;
}

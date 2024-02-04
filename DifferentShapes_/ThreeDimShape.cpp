//
// Created by Annie on 4.2.2024 г..
//

#include "ThreeDimShape.h"
#include <iostream>

using namespace std;

double ThreeDimShape::getA() const {
    return a;
}

void ThreeDimShape::setA(double a) {
    ThreeDimShape::a = a;
}

double ThreeDimShape::getB() const {
    return b;
}

void ThreeDimShape::setB(double b) {
    ThreeDimShape::b = b;
}

double ThreeDimShape::getH() const {
    return h;
}

void ThreeDimShape::setH(double h) {
    ThreeDimShape::h = h;
}

ThreeDimShape::ThreeDimShape(double a, double b, double h) {
    setA(a);
    setB(b);
    setH(h);
}

double ThreeDimShape::getArea() {
    return a * b;
}

double ThreeDimShape::getVolume() {
    return (a * b) + h;
}




//
// Created by Annie on 28.1.2024 г..
//

#include "ThreeDimShape.h"
#include <iostream>


using namespace std;

ThreeDimShape::ThreeDimShape(int a, int h) : Shape(a) {
    this->h = h;
}
void ThreeDimShape::print() {
    cout << "We are in 3D print " << this->h << endl;
}
double ThreeDimShape::getArea() {
    cout << "3D shape area" << endl;
    return 0.0;
}
double ThreeDimShape::getVolume() {
    cout << "3D shape volume" << endl;
    return 0.0;
}
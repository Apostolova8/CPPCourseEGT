//
// Created by Annie on 28.1.2024 г..
//

#ifndef SHAPES_TWODIMSHAPE_H
#define SHAPES_TWODIMSHAPE_H


#include <iostream>
#include "Shape.h"
#include <string>

using namespace std;

class TwoDimShape : public Shape {

public:
    TwoDimShape(int, int, int, string, char);
    virtual void print();
    virtual double getArea();
    void setSize(int);
    void setPosition(int);
    void setSh(string);
    void setCh(char);
    int getSize();
    int getPosition();
    string getSh();
    char getCh();

private:
    int size;
    int position;
    string sh;
    char ch;
};


#endif //SHAPES_TWODIMSHAPE_H

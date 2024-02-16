//
// Created by Annie on 16.2.2024 г..
//

#ifndef CODINGTASKS_INHERITANCE_HOMEWORK_SHAPE_H
#define CODINGTASKS_INHERITANCE_HOMEWORK_SHAPE_H
#include <iostream>

using namespace std;

class Shape {

public:
    Shape(string);  //constructor

    //set and get methods for color:

    const string &getColor() const;

    void setColor(const string &color);

    virtual void draw();    //virtual function which will be override in other classes

protected:
    string color;
};


#endif //CODINGTASKS_INHERITANCE_HOMEWORK_SHAPE_H

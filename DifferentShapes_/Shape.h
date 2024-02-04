//
// Created by Annie on 4.2.2024 г..
//

#ifndef DIFFERENTSHAPES__SHAPE_H
#define DIFFERENTSHAPES__SHAPE_H
#include <vector>

using namespace std;

class Shape {

public:
    virtual double getArea();

    virtual double getVolume();

    virtual ~Shape() {}
};


#endif //DIFFERENTSHAPES__SHAPE_H

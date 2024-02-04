#include <iostream>
#include <vector>
#include "TwoDimShape.h"
#include "ThreeDimShape.h"
#include "Shape.h"

using namespace std;

int main() {

    vector<Shape*> shapeVector;

    shapeVector.push_back(new TwoDimShape(5, 10));
    shapeVector.push_back(new TwoDimShape(7.5, 12.3));

    shapeVector.push_back(new ThreeDimShape(6, 12, 15));
    shapeVector.push_back(new ThreeDimShape(3.5, 7.3, 9.2));


    for (const auto& shape : shapeVector) {
        if (auto* twoDimShape = dynamic_cast<TwoDimShape*>(shape)) {
            cout << "This is a 2D shape." << endl;
        } else if (auto* threeDimShape = dynamic_cast<ThreeDimShape*>(shape)) {
            cout << "This is a 3D shape." << endl;
            cout << "Volume: " << shape->getVolume() << endl;
        }
      
        cout << "Area: " << shape->getArea() << endl;
    }


    return 0;
}

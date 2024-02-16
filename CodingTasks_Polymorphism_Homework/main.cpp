#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

void printArea(const Shape* shape) {    //function which takes a pointer to the base class Shape
    cout << "Area is: " << shape->area() << endl;
}

int main() {

    Circle c1(5);   //object for circle
    Rectangle r1(10, 25);    //object for rectangle

    printArea(&c1); //display area of circle
    printArea(&r1);  //display area of rectangle

    return 0;
}

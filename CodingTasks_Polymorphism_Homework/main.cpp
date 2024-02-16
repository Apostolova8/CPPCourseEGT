#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

void printArea(const Shape* shape) {    //function which takes a pointer to the base class Shape
    cout << "Area is: " << shape->area() << endl;
}

int main() {

    Circle c1(5, "red");   //object for circle
    c1.draw();
    printArea(&c1); //display area of circle

    Rectangle r1(10, 25, "blue");    //object for rectangle
    r1.draw();
    printArea(&r1);  //display area of rectangle

    return 0;
}

#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {

    Shape sh1("red");   //create object of class
    sh1.draw();         //display method
    cout << endl;

    Circle c1("yellow");
    c1.draw();
    cout << endl;

    Rectangle r1("blue");
    r1.draw();


    return 0;
}

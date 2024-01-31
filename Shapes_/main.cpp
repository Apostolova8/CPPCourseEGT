#include <iostream>
#include "Shape.h"
#include "TwoDimShape.h"
#include "ThreeDimShape.h"
#include <vector>
#include "Rectangle.h"

using namespace std;

int main(){

/*    Shape* sPtr1 = new TwoDimShape(30, 4, 5, "two", 't');
    Shape* sPtr2 = new ThreeDimShape(15, 20);
    Shape* sPtr3 = new Rectangle(20, 10, 25, "figure is rectangle", 'r', 20);
    Shape* sPtr4 = new Rectangle(25, 15, 30, "figure is rectangle", 'r', 25);

    vector<Shape*> myShapes;
    //myShapes.push_back(sPtr1);
    //myShapes.push_back(sPtr2);
    myShapes.push_back(sPtr3);
    myShapes.push_back(sPtr4);

    for (int i = 0; i < myShapes.size(); i++) {
        myShapes.at(i)->print();
        cout << myShapes.at(i)->getArea() << endl;
    }
    return 0;*/

    Rectangle rec1 (30, 10, 25, "Rectangle 1", 'r', 30);
    Rectangle rec2 (25, 15, 30, "Rectangle 2", 'r', 25);

    rec1 + rec2;

    cout << "Rectangle 1 area is: " << rec1.getArea() << endl;
    cout << "Rectangle 2 area is: " << rec2.getArea() << endl;

    return 0;
}

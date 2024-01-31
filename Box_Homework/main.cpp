#include <iostream>
#include "Box.h"

using namespace std;

int main() {

    Box box1(10.5, 20.9, 5.8);
            // w     l    h
    Box box2(10.3, 20.8, 4.9);

    Box box3 = box1 + box2;

    cout << "New box dimensions: " << endl;
    cout << "Width is: " << box3.getWidth() << endl;
    cout << "Length is: " << box3.getLength() << endl;
    cout << "Height is: " << box3.getHeight() << endl;

    return 0;
}


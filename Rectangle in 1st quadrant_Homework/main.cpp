#include <iostream>
#include <cmath>
using namespace std;

class Rectangle {
private:
    double x1, y1, x2, y2, x3, y3, x4, y4;
    //x1,y1 - A
    //x2,y2 - B
    //x3,y3 - C
    //x4,y4 - D
public:
    Rectangle() {}

    void setCoordinates(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
        // Verify that each coordinate is in the first quadrant and within the specified range
        if (x1 >= 0 && x1 <= 20.0 && y1 >= 0 && y1 <= 20.0 &&
            x2 >= 0 && x2 <= 20.0 && y2 >= 0 && y2 <= 20.0 &&
            x3 >= 0 && x3 <= 20.0 && y3 >= 0 && y3 <= 20.0 &&
            x4 >= 0 && x4 <= 20.0 && y4 >= 0 && y4 <= 20.0) {
            // Verify that the supplied coordinates form a rectangle
            if ((x1 == x2 && y1 == y4 && y2 == y3 && x3 == x4) || (y1 == y2 && x2 == x3 && x1 == x4 && y3 == y4)) {
                this->x1 = x1;
                this->y1 = y1;
                this->x2 = x2;
                this->y2 = y2;
                this->x3 = x3;
                this->y3 = y3;
                this->x4 = x4;
                this->y4 = y4;
            }
            else {
                cout << "Error: The supplied coordinates do not form a rectangle." << endl;
            }
        }
        else {
            cout << "Error: Coordinates must be in the first quadrant and within the range [0, 20.0]." << endl;
        }
    }

    double calculateLength() {
        return max(abs(x2 - x1), abs(y2 - y1));
    }

    double calculateWidth() {
        return min(abs(x2 - x1), abs(y2 - y1));
    }

    double calculatePerimeter() {
        return 2 * (calculateLength() + calculateWidth());
    }

    double calculateArea() {
        return calculateLength() * calculateWidth();
    }

    bool isSquare() {
        return calculateLength() == calculateWidth();
    }
};

int main() {
    Rectangle myRectangle;
    myRectangle.setCoordinates(1.0, 2.0, 5.0, 2.0, 5.0, 6.0, 1.0, 6.0);

    cout << "Length: " << myRectangle.calculateLength() << endl;
    cout << "Width: " << myRectangle.calculateWidth() << endl;
    cout << "Perimeter: " << myRectangle.calculatePerimeter() << endl;
    cout << "Area: " << myRectangle.calculateArea() << endl;
    cout << "Is Square: " << (myRectangle.isSquare() ? "Yes" : "No") << endl;

    return 0;
}

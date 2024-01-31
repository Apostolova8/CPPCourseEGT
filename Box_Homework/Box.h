//
// Created by Annie on 27.1.2024 г..
//

#ifndef BOX_BOX_H
#define BOX_BOX_H


class Box {

public:

    Box(double, double, double);

    Box operator+(const Box& other) const;

    double getWidth() const;

    void setWidth(double width);

    double getLength() const;

    void setLength(double length);

    double getHeight() const;

    void setHeight(double height);

private:

    double width;
    double length;
    double height;

};


#endif //BOX_BOX_H

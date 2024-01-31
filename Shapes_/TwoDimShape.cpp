//
// Created by Annie on 28.1.2024 г..
//

#include <iostream>
#include "TwoDimShape.h"

using namespace std;

TwoDimShape::TwoDimShape(int a, int size, int position, string sh, char ch) : Shape(a)
{
}

void TwoDimShape::print()
{
    cout << "In 2D print" << endl;
}

double TwoDimShape::getArea()
{
    cout << "In 2D getArea" << endl;
    return 0.0;
}

void TwoDimShape::setSize(int size)
{
    this->size = size;
}

void TwoDimShape::setPosition(int p)
{
    this->position = p;
}

void TwoDimShape::setSh(string sh)
{
    this->sh = sh;
}

void TwoDimShape::setCh(char ch)
{
    this->ch = ch;
}

int TwoDimShape::getSize()
{
    return this->size;
}

int TwoDimShape::getPosition()
{
    return this->position;
}

string TwoDimShape::getSh()
{
    return this->sh;
}

char TwoDimShape::getCh()
{
    return this->ch;
}
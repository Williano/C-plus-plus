// Rectangle.cpp is the Rectangle class function implementation file.

#include "Rectangle.h"

void Rectangle::setLength(double len)
{
    length = len;
}

void Rectangle::setWidth(double wid)
{
    width = wid;
}

double Rectangle::getLength()
{
    return length;
}

double Rectangle::getWidth()
{
    return width;
}

double Rectangle::getArea()
{
    double area;
    area = length * width;
    return area;
}

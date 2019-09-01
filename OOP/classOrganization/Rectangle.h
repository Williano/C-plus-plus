// Rectangle class specification file.

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double length;
    double width;

public:
    void setLength(double len);

    void setWidth(double wid);
    double getLength();

    double getWidth();
    double getArea();
};

#endif
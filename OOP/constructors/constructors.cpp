/*
    Title: Class Constructors
    Description: This program demonstrates a simple class constructor.
    Author: William Kwabla.
    Date:30/08/19
*/

#include <iostream>
#include <cmath>

using namespace std;

class Circle
{
private:
    double radius;

public:
    Circle(double r);
    void setRadius(double radius);
    double getArea();
};

Circle::Circle(double r)
{
    radius = r;
}

// Member fucntion defined outside the class.
void Circle::setRadius(double radius)
{
    radius = radius;
}

double Circle::getArea()
{
    double area;
    area = 3.14 * pow(radius, 2);
    return area;
}

int main()
{
    // create an instance of the Circle object.

    Circle circle1(1), circle2(2.5);

    // circle1.setRadius(1);
    // circle2.setRadius(2.5);

    cout << "The area of circle1 is " << circle1.getArea() << endl;
    cout << "The area of circle2 is " << circle2.getArea() << endl;

    return 0;
}
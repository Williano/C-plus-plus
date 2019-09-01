/*
    Title: Classes
    Description: This program demonstrates a simple class.
    Author: William Kwabla.
    Date: 28/08/19
*/

#include <iostream>
#include <cmath>

using namespace std;

class Circle
{
private:
    double radius;

public:
    void setRadius(double radius)
    {
        radius = radius;
    }

    double getArea()
    {
        int area;
        area = 3.14 * pow(radius, 2);
        return area;
    }
};

int main()
{
    // create an instance of the Circle object.
    Circle circle1,
        circle2;

    circle1.setRadius(1);
    circle2.setRadius(2.5);

    cout << "The area of circle1 is " << circle1.getArea() << endl;
    cout << "The area of circle2 is " << circle2.getArea() << endl;

    return 0;
}
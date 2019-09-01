/*
    Title: Object Compositions
    Description: This program demonstrates object composition.
    Author: William Kwabla.
    Date:01/09/19
*/

#include <iostream>

using namespace std;

// Rectangle class
class Rectangle
{
private:
    double length;
    double width;

public:
    void setLength(double len)
    {
        length = len;
    }

    void setWidth(double wid)
    {
        width = wid;
    }

    double getLength()
    {
        return length;
    }

    double getWidth()
    {
        return width;
    }

    double getArea()
    {
        double area;
        area = length * width;
        return area;
    }
};

// Carpt Class
class Carpet
{
private:
    double pricePerSqYd;
    Rectangle size;

public:
    void setPricePerSqYd(double pricePSY)
    {
        pricePerSqYd = pricePSY;
    }

    void setDimensions(double len, double wid)
    {
        size.setLength(len / 3);
        size.setWidth(wid / 3);
    }

    double getTotalPrice()
    {
        return (size.getArea() * pricePerSqYd);
    }
};

// Main Program
int main()
{
    Carpet purchase;

    double pricePerYd;
    double length;
    double width;

    cout << "Room lenght in feet: ";
    cin >> length;

    cout << "Room width in feet: ";
    cin >> width;

    cout << "Carpet price per sq. yard: ";
    cin >> pricePerYd;

    purchase.setDimensions(length, width);
    purchase.setPricePerSqYd(pricePerYd);

    cout << "\nThe total price of my new " << length << " x "
         << width << " carpet is $" << purchase.getTotalPrice() << endl;

    return 0;
}
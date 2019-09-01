/*
    Title: This program uses the Rectangle class.
           The Rectangle class declaration is in file Rectangle.h.
           The Rectangle member function definitions are in Rectangle.cpp
           These files should all be combined into a project.
    Author: William Kwabla.
    Date:01/09/19
*/

#include <iostream>
#include "Rectangle.h"
#include "Carpet.h"

using namespace std;

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
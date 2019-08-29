/*
    Title: Boolean Returning Functions
    Description: This program demonstrates value returning functions.
    Author: William Kwabla.
    Date: 28/08/19
*/

#include <iostream>

using namespace std;

bool isEven(int number);

int main()
{
    int value;

    cout << "Enter an integer and I will tell you ";
    cout << "if it is even or odd:";
    cin >> value;

    if (isEven(value))
    {
        cout << value << " is even. \n";
    }
    else
    {
        cout << value << " is odd. \n";
    }

    return 0;
}

bool isEven(int number)
{
    if (number % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
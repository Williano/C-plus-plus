/*
    Title: Value Returning Functions
    Description: This program demonstrates value returning functions.
    Author: William Kwabla.
    Date: 28/08/19
*/

#include <iostream>

using namespace std;

int sum(int num1, int num2);

int main()
{
    int value1 = 20,
        value2 = 40,
        total;

    total = sum(value1, value2);

    cout << "The sum of " << value1 << " and " << value2 << " is " << total << endl;

    return 0;
}

int sum(int num1, int num2)
{
    int total;
    total = num1 + num2;
    return total;
}
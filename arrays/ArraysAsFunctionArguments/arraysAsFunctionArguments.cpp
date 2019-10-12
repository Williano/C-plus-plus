/*
    Title: Arrays As Function Arguments.
    Description: This program demonstrates how arrays are passed to functions.
    Author: William Kwabla.
    Date:12/10/19
*/

#include <iostream>

using namespace std;

// Declare arrayType to be an alias for an array of ints
typedef int arrayType[];

// Function Prototypes
void doubleArray(arrayType numbers, int size);
void showValues(arrayType num, int size);

int main()
{
    const int ARRAY_SIZE = 7;
    arrayType set = {1, 2, 3, 4, 5, 6, 7};

    // Display the original values
    cout << "The arrays values are:\n";
    showValues(set, ARRAY_SIZE);

    // Double the values in the array.
    doubleArray(set, ARRAY_SIZE);

    // Display the new values
    cout << "\nAfter calling doubleArray, the values are:\n";
    showValues(set, ARRAY_SIZE);
    cout << endl;

    return 0;
}

/***************************************************
 *                 doubleArray                     *
 * The function doubles the value of each element  *
 * in the array whose address is passed to it      *
****************************************************/
void doubleArray(arrayType numbers, int size)
{
    for (int index = 0; index < size; index++)
    {
        numbers[index] *= 2;
    }
}

/******************************************************
 *                 showValues                         *
 * The function displays the content of an int array  *
 * when passed the address and size as arguments.     *
*******************************************************/
void showValues(arrayType num, int size)
{
    for (int index = 0; index < size; index++)
    {
        cout << num[index] << " ";
        cout << endl;
    }
}
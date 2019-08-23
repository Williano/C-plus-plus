/*
    Title: While Loop
    Description: This program demonstrate a simple while loop.
    Author: William Kwabla.
    Date: 22/08/19
*/

#include <iostream>

int main()
{
    int number = 1;

    while (number <= 5)
    {
        std::cout << "Hello     ";
        number = number + 1;
    }

    std::cout << "\nThat's all!\n";

    return 0;
}
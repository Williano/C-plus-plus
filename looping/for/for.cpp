/*
    Title: for Loop
    Description: This program demonstrate a simple for loop.
    Author: William Kwabla.
    Date: 22/08/19
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num;

    std::cout << "Number square\n";
    std::cout << "-------------\n";

    for (num = 1; num <= 5; num++)
    {
        std::cout << setw(4) << num << setw(7) << (num * num) << std::endl;
    }
    return 0;
}
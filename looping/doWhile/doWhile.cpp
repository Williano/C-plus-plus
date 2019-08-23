/*
    Title: do While Loop
    Description: This program demonstrate a simple do while loop.
    Author: William Kwabla.
    Date: 22/08/19
*/

#include <iostream>

int main()
{
    int scorel, score2, score3;
    double average;
    char again;

    do
    {
        // Get three scores from user
        std::cout << "\nEnter 3 scores and I will average them : ";
        std::cin >> scorel >> score2 >> score3;

        // Calculate and display the average
        average = (scorel + score2 + score3) / 3.0;
        std::cout << "The average is " << average << "\n \n";

        //  Does the user want to average another set ?
        std::cout << "Do you want to average another set ? (Y / N) ";
        std::cin >> again;

    } while (again == 'Y' || again == 'y');

    return 0;
}
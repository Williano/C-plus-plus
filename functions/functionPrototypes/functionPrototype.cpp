/*
    Title: Function prototypes
    Description: This program demonstrates function prototypes.
    Author: William Kwabla.
    Date: 24/08/19
*/

#include <iostream>

using namespace std;

// Function prototype
void displayMessage();

int main()
{
    cout << "Hello from the main function.\n";
    displayMessage();
    cout << "Back in main function again.\n";

    return 0;
}

void displayMessage()
{
    cout << "Hello from the function displayMessage.\n";
}

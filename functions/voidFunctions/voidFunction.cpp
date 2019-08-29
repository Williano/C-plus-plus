/*
    Title: Void functions
    Description: This program demonstrates a void function.
    Author: William Kwabla.
    Date: 24/08/19
*/

#include <iostream>

using namespace std;

void displayMessage()
{
    cout << "Hello from the function displayMessage.\n";
}

int main()
{
    cout << "Hello from the main function.\n";
    displayMessage();
    cout << "Back in main function again.\n";

    return 0;
}
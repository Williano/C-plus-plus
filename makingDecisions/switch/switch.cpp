/*
  Title: This program demonstrates the use of a switch statement.
         The program simply tells the user what character they entered.
  Author: William Kpabitey Kwabla.
  Date: 21/08/19
*/

#include <iostream>

using namespace std;

int main()
{
    char choice;

    cout << "Enter A, B or C: ";
    cin >> choice;

    switch (choice)
    {
    case 'a':
    case 'A':
        cout << "You entered A.\n";
        break;

    case 'b':
    case 'B':
        cout << "You entered B.\n";
        break;

    case 'c':
    case 'C':
        cout << "You entered C.\n";

    default:
        cout << "You didn't enter anything";
        break;
    }

    return 0;
}
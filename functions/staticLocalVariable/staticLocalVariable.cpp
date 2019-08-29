/*
    Title: Static Local Variables
    Description: This program demonstrates static local variables..
    Author: William Kwabla.
    Date: 28/08/19

*/

#include <iostream>

using namespace std;

void showStatic();

int main()
{
    for (int count = 0; count < 5; count++)
    {
        showStatic();
    }
    return 0;
}


void showStatic()
{
    static int numCalls = 0;

    cout << "This function has been called ";
    cout << ++numCalls << " times. " << endl;

}
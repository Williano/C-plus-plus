/*
  Title: Function Templates
  Description: This program illustrates the use of function templates with multiple types.
  Programmer: William Kwabla
  Date: 10/10/19
*/

#include <iostream>
#include <string>

using namespace std;

// Template definition for square function
template <class T1, class T2, class T3>
void echoAndReverse(T1 a1, T2 a2, T3 a3)
{
    cout << "Original Order is: " << a1 << " " << a2 << " " << a3 << endl;
    cout << "Reversed Order is: " << a3 << " " << a2 << " " << a1 << endl;
}

int main()
{

    echoAndReverse("Computer", 'A', 18);
    echoAndReverse("One", 4, "All");

    return 0;
}
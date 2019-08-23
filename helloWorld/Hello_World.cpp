#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    string name = "William";
    string address = "P.O.BOX KS 10731";
    string city = "Kumasi";
    string state = "Ashanti";
    string zipCode = "00233";
    string telephoneNumber = "0201875333";
    string collegeMajor = "Computer Science";
    string nameq;

    string text = "Prog";
    char letter = 'a';
    cout << "Programming is great fun! " << text << setw(2) << letter << endl;
    cout << name << endl
         << address << "," << city << "," << state << "," << zipCode << endl
         << telephoneNumber << endl;
    cout << pow(3.0, 2.0) << endl;
    cout << static_cast<double>(pow(3.0, 2.0));
    cout << "Enter your name: ";
    getline(cin, nameq);
    cout << nameq;
    return 0;
}

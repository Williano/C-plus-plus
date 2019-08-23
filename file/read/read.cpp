/*
    Title: read from file
    Description: This program demonstrate a simple way of reading from a file.
    Author: William Kwabla.
    Date: 22/08/19
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inputFile;
    string name;

    // Open the input file.
    inputFile.open("demofile.txt");

    cout << "Reading from file\n";

    while (inputFile >> name)
    {
        cout << name << endl;
    }

    // Close file.
    inputFile.close();

    return 0;
}

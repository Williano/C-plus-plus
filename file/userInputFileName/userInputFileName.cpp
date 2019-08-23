/*
    Title: User input file name
    Description: This program demonstrate a way of letting user enter file name.
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
    string fileName;
    string name;

    // Get the file name from the user
    cout << "Enter the filename: ";
    cin >> fileName;

    // open the output file.
    inputFile.open(fileName.c_str());

    if (inputFile)
    {
        while (inputFile >> name)
        {
            cout << name << endl;
        }

        // Close file.
        inputFile.close();
    }
    else
    {
        cout << "Error opening the file.\n";
    }

    cout << "Done.\n";

    return 0;
}
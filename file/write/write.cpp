/*
    Title: write to file
    Description: This program demonstrate a simple way of writing to file.
    Author: William Kwabla.
    Date: 22/08/19
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outputFile;

    // open the output file.
    outputFile.open("demofile.txt");

    cout << "Now writing to file.\n";

    // Wrtie four names to the file.
    outputFile << "Beach\n";
    outputFile << "Beethoven\n";
    outputFile << "Mozart\n";
    outputFile << "Schubert\n";

    // close the file.
    outputFile.close();

    cout << "Done.\n";

    return 0;
}
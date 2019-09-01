/*
    Title: Structures
    Description: This program demonstrates structures.
    Author: William Kwabla.
    Date:01/09/19
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct PayRoll
{
    int empNumber;
    string name;
    double hours, payRate;
};

int main()
{
    PayRoll employee;
    double grossPay;

    cout << "Enter employee's number: ";
    cin >> employee.empNumber;

    cout << "Enter employee's name: ";
    cin.ignore();
    getline(cin, employee.name);

    cout << "Hours worked this week: ";
    cin >> employee.hours;

    cout << "Employee's hourly pay rate: ";
    cin >> employee.payRate;

    grossPay = employee.hours * employee.payRate;

    cout << "\nHere is the employee's payroll data: \n";
    cout << "Name:               " << employee.name << endl;
    cout << "Employee Number:    " << employee.empNumber << endl;
    cout << "Hours Worked:       " << employee.hours << endl;
    cout << "Hourly pay rate:    " << employee.payRate << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "Gross pay:         $" << grossPay << endl;

    return 0;
}
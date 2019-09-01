/*
    Title: Retuning Structures from  funcions
    Description: This program passes a structure variable to one function
                 by reference and return a structure from a function.
    Author: William Kwabla.
    Date:01/09/19
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct InvItem
{
    int partNum;
    string description;
    int onHand;
    double price;
};

InvItem getItemData();
void showItem(const InvItem &);

int main()
{
    InvItem part;

    part = getItemData();

    cout << "\n";

    showItem(part);

    return 0;
}

InvItem getItemData()
{
    InvItem item;

    cout << "Enter the part number: ";
    cin >> item.partNum;
    cout << "Enter the description: ";
    cin.get();

    getline(cin, item.description);

    cout << "Enter the quanity on hand: ";
    cin >> item.onHand;

    cout << "Enter the unit price: $ ";
    cin >> item.price;

    return item;
}

void showItem(const InvItem &item)
{
    cout << fixed << showpoint << setprecision(2);
    cout << "Part Number   : " << item.partNum << endl;
    cout << "Description   : " << item.description << endl;
    cout << "Units on Hand : " << item.onHand << endl;
    cout << "Price         :$ " << item.price << endl;
}
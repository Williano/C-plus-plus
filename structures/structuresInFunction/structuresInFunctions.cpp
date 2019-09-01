/*
    Title: Passing Structures to funcions
    Description: This program passes a structure variable to one function
                 by reference and to another as a constant reference.
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

void getItemData(InvItem &);
void showItem(const InvItem &);

int main()
{
    InvItem part;

    getItemData(part);

    cout << "\n";

    showItem(part);

    return 0;
}

void getItemData(InvItem &item)
{
    cout << "Enter the part number: ";
    cin >> item.partNum;
    cout << "Enter the description: ";
    cin.get();

    getline(cin, item.description);

    cout << "Enter the quanity on hand: ";
    cin >> item.onHand;

    cout << "Enter the unit price: $ ";
    cin >> item.price;
}

void showItem(const InvItem &item)
{
    cout << fixed << showpoint << setprecision(2);
    cout << "Part Number   : " << item.partNum << endl;
    cout << "Description   : " << item.description << endl;
    cout << "Units on Hand : " << item.onHand << endl;
    cout << "Price         :$ " << item.price << endl;
}
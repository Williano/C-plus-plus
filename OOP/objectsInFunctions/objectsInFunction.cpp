/*
    Title: objectsInFunction
    Description: This program uses a constant reference parameter.
                 It also shows how to return an object from a function.
    Author: William Kwabla.
    Date:01/09/19
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Class definition
class InventoryItem
{

private:
    int partNum;
    string description;
    int onHand;
    double price;

public:
    void storeInfo(int partN, string descri, int onH, double pri);

    int getPartNum() const
    {
        return partNum;
    }

    string getdescription() const
    {
        return description;
    }

    int getOnHand() const
    {
        return onHand;
    }

    double getPrice() const
    {
        return price;
    }
};

void InventoryItem::storeInfo(int partN, string descri, int onH, double pri)
{
    partNum = partN;
    description = descri;
    onHand = onH;
    price = pri;
}

// Fucntion prototypes
InventoryItem createItem();
void showValues(const InventoryItem &item);

// Main program
int main()
{
    InventoryItem part = createItem();
    showValues(part);

    return 0;
}

// Function to return object
InventoryItem createItem()
{
    InventoryItem tempItem;

    int partNum;
    string description;
    int qty;
    double price;

    cout << "Enter data for the new part number \n";
    cout << "Part number: ";
    cin >> partNum;

    cout << "Description: ";
    cin.get();

    getline(cin, description);

    cout << "Quantity on Hand: ";
    cin >> qty;

    cout << "Unit Price: ";
    cin >> price;

    tempItem.storeInfo(partNum, description, qty, price);

    return tempItem;
}

// Function that takes in an object.
void showValues(const InventoryItem &item)
{
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "Part Number: " << item.getPartNum() << endl;
    cout << "Description: " << item.getdescription() << endl;
    cout << "Units on Hand: " << item.getOnHand() << endl;
    cout << "Price    :$" << item.getPrice() << endl;
}
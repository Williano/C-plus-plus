/*
    Title: Structures
    Description: This program demonstrates nested structures.
    Author: William Kwabla.
    Date:01/09/19
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct CostInfo
{
    double food,
        medical,
        license,
        misc;
};

struct PetInfo
{
    string name;
    string type;
    int age;

    CostInfo cost;

    PetInfo()
    {
        name = "unknown";
        type = "unknown";
        age = 0;
        cost.food = 0.00;
        cost.medical = 0.00;
        cost.license = 0.00;
        cost.misc = 0.00;
    }
};

int main()
{
    PetInfo pet;

    pet.name = "Sassy";
    pet.type = "cat";
    pet.age = 5;
    pet.cost.food = 300.00;
    pet.cost.medical = 200.00;
    pet.cost.license = 7.00;

    cout << fixed << showpoint << setprecision(2);
    cout << "Animal cost for my " << pet.age
         << "-year-old " << pet.type << " "
         << pet.name << " are $"
         << (pet.cost.food + pet.cost.medical +
             pet.cost.license + pet.cost.misc)
         << endl;

    return 0;
}
// Carpt Class specification file

#ifndef CARPET_H
#define CARPET_H

#include "Rectangle.h"

class Carpet
{
private:
    double pricePerSqYd;
    Rectangle size;

public:
    void setPricePerSqYd(double pricePSY);

    void setDimensions(double len, double wid);

    double getTotalPrice();
};

#endif
// Carpt Class implementation file.

#include "Rectangle.h"
#include "Carpet.h"

void Carpet::setPricePerSqYd(double pricePSY)
{
    pricePerSqYd = pricePSY;
}

void Carpet::setDimensions(double len, double wid)
{
    size.setLength(len / 3);
    size.setWidth(wid / 3);
}

double Carpet::getTotalPrice()
{
    return (size.getArea() * pricePerSqYd);
}
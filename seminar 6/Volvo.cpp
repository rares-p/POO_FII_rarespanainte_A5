#include "Volvo.h"

int Volvo::getFuelCapacity()
{
    return this->fuelCapacity;
}

int Volvo::getFuelConsumption()
{
    return this->fuelConsumption;
}

int Volvo::getAverageSpeed(Weather weather)
{
    return this->averageSpeed[weather];
}

const char* Volvo::getBrand()
{
    return "Volvo";
}

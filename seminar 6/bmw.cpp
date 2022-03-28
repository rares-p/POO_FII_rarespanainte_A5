#include "bmw.h"
#include "circuit.h"

int BMW::getFuelCapacity()
{
    return this->fuelCapacity;
}

int BMW::getFuelConsumption()
{
    return this->fuelConsumption;
}

int BMW::getAverageSpeed(Weather weather)
{
    return this->averageSpeed[weather];
}


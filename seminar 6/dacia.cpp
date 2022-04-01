#include "dacia.h"
#include "circuit.h"

int Dacia::getFuelCapacity()
{
    return this->fuelCapacity;
}

int Dacia::getFuelConsumption()
{
    return this->fuelConsumption;
}

int Dacia::getAverageSpeed(Weather weather)
{
    return this->averageSpeed[weather];
}

const char* Dacia::getBrand()
{
    return "Dacia";
}

#include "opel.h"
#include "circuit.h"

int Opel::getFuelCapacity()
{
    return this->fuelCapacity;
}

int Opel::getFuelConsumption()
{
    return this->fuelConsumption;
}

int Opel::getAverageSpeed(Weather weather)
{
    return this->averageSpeed[weather];
}

const char* Opel::getBrand()
{
    return "Opel";
}


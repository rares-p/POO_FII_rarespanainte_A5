#include "circuit.h"

void Circuit::SetWeather(Weather newWeather)
{
    this->weather = newWeather;
}

void Circuit::AddCar(Car* car)
{
    if(this->carsCount > 100)
        return;
    cars[carsCount++] = car;
}

void Circuit::SetLength(int newLength)
{
    this->length = newLength;
}

int Circuit::getAverageSpeedIndex(int i)
{
    return cars[i]->getAverageSpeed(Rain);
}

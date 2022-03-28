#pragma once
#include "car.h"

class Dacia : public Car
{
    int fuelCapacity = 50, fuelConsumption = 7;
    int averageSpeed[3] = {150, 180, 120};
public:
    int getFuelCapacity();
    int getFuelConsumption();
    int getAverageSpeed(Weather weather);
};

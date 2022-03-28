#pragma once
#include "car.h"

class BMW : public Car
{
    int fuelCapacity = 30, fuelConsumption = 7;
    int averageSpeed[3] = {40, 70, 30};
public:
    int getFuelCapacity();
    int getFuelConsumption();
    int getAverageSpeed(Weather weather);
};

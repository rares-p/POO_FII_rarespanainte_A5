#pragma once
#include "car.h"

class BMW : public Car
{
    int fuelCapacity = 30, fuelConsumption = 7;
    int averageSpeed[3] = {120, 160, 110};
public:
    int getFuelCapacity();
    int getFuelConsumption();
    int getAverageSpeed(Weather weather);
    const char* getBrand();
};

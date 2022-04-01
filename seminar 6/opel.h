#pragma once
#include "car.h"

class Opel : public Car
{
    int fuelCapacity = 30, fuelConsumption = 8;
    int averageSpeed[3] = {70, 120, 65};
public:
    int getFuelCapacity();
    int getFuelConsumption();
    int getAverageSpeed(Weather weather);
    const char* getBrand();
};


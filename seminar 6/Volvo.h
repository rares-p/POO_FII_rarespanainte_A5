#pragma once
#include "car.h"

class Volvo : public Car
{
    int fuelCapacity = 70, fuelConsumption = 10;
    int averageSpeed[3] = {110, 130, 90};
public:
    int getFuelCapacity();
    int getFuelConsumption();
    int getAverageSpeed(Weather weather);
    const char* getBrand();
};


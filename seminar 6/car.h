#pragma once
#include "weather.h"

class Car
{
public:
    virtual int getFuelCapacity() = 0;
    virtual int getFuelConsumption() = 0;
    virtual int getAverageSpeed(Weather weather) = 0;
};

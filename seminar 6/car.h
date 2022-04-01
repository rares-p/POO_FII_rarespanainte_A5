#pragma once
#include "weather.h"
#include <cstring>

class Car
{
public:
    virtual ~Car(){};
    virtual int getFuelCapacity() = 0;
    virtual int getFuelConsumption() = 0;
    virtual int getAverageSpeed(Weather weather) = 0;
    virtual const char* getBrand() = 0;
};

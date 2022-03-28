#pragma once
#include "weather.h"
#include "car.h"

class Circuit
{
    Car* cars[100];
    int carsCount = 0;
    int length = 100;
    Weather weather = Sunny;
public:
    void AddCar(Car* car);
    void SetWeather(Weather newWeather);
    void SetLength(int newLength);
    int getAverageSpeedIndex(int i);
};

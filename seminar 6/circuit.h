#pragma once
#include "weather.h"
#include "car.h"

class Circuit
{
    Car* cars[100];
    int carsCount = 0;
    int length = 100;
    Car* top[100];
    float topspeed[100];
    int topsize = 0;
    Car* notFinished[100];
    int notFinishedCount = 0;
    Weather weather = Sunny;
public:
    void AddCar(Car* car);
    void SetWeather(Weather newWeather);
    void SetLength(int newLength);
    int getAverageSpeedIndex(int i);
    void Race();
    void ShowFinalRanks();
    void ShowWhoDidNotFinish();
};

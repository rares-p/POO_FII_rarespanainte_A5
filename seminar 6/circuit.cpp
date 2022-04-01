#include "circuit.h"
#include <iostream>

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
    return cars[i]->getAverageSpeed(this->weather);
}

void Circuit::Race()
{
    this->topsize = 0;
    this->notFinishedCount = 0;
    for(int i = 0; i < this->carsCount; i ++)
        if(cars[i]->getFuelCapacity() * 100 / cars[i]->getFuelConsumption() >= this->length)
            this->top[topsize] = cars[i], this->topspeed[topsize] = 1.0 * cars[i]->getAverageSpeed(this->weather) / this->length, this->topsize ++;
        else
            this->notFinished[this->notFinishedCount] = cars[i], this->notFinishedCount ++;
    for(int i = 0; i < this->topsize - 1; i ++)
        for(int j = i + 1; j < this->topsize; j ++)
            if(topspeed[i] < topspeed[j])
                std::swap(topspeed[i], topspeed[j]), std::swap(top[i], top[j]);
}

void Circuit::ShowFinalRanks()
{
    std::cout<<"Ranking:\n";
    for(int i = 0; i < this->topsize; i ++)
        std::cout << i + 1 << ". " << this->top[i]->getBrand() << '\n';
}

void Circuit::ShowWhoDidNotFinish()
{
    std::cout<<"The following cars did not finish the race:\n";
    for(int i = 0; i < this->notFinishedCount; i ++)
        std::cout << this->notFinished[i]->getBrand() << '\n';
}

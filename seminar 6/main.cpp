#include <iostream>
#include "circuit.h"
#include "car.h"
#include "dacia.h"
#include "volvo.h"
using namespace std;

int main()
{
    Circuit c;
    c.SetLength(100);
    c.SetWeather(Weather::Rain);
    c.AddCar(new Dacia());
    c.AddCar(new Volvo());
    cout<<c.getAverageSpeedIndex(0);
}

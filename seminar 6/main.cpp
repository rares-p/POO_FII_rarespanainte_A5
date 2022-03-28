#include <iostream>
#include "circuit.h"
#include "car.h"
#include "dacia.h"
#include "volvo.h"
#include "bmw.h"
using namespace std;

int main()
{
    Circuit c;
    c.SetLength(100);
    c.SetWeather(Weather::Rain);
    c.AddCar(new Dacia());
    c.AddCar(new Volvo());
    c.AddCar(new BMW());
    cout<<c.getAverageSpeedIndex(0)<< ' '<<c.getAverageSpeedIndex(1)<< ' '<<c.getAverageSpeedIndex(2)<<'\n';
    c.SetWeather(Snow);
    cout<<c.getAverageSpeedIndex(0)<< ' '<<c.getAverageSpeedIndex(1)<< ' '<<c.getAverageSpeedIndex(2);
}

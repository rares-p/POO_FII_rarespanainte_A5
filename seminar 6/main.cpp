#include <iostream>
#include "circuit.h"
#include "car.h"
#include "dacia.h"
#include "volvo.h"
#include "bmw.h"
#include "opel.h"
using namespace std;

int main()
{
    Circuit c;
    c.SetLength(500);
    c.SetWeather(Weather::Rain);
    c.AddCar(new Dacia());
    c.AddCar(new Volvo());
    c.AddCar(new Opel());
    c.AddCar(new BMW());
    c.Race();
    c.ShowFinalRanks();
    c.ShowWhoDidNotFinish();
}

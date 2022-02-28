#include <iostream>
#include "NumberList.h"

using namespace std;

int main()
{
    NumberList a;

    a.Init();

    a.Add(1);
    a.Add(7);
    a.Add(24);
    a.Add(2);
    a.Add(235);
    a.Add(25);
    a.Print();

    a.Sort();

    a.Print();
}

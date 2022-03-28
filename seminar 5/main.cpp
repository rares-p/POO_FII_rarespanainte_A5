#include <iostream>
#include "Number.h"

using namespace std;

int main()
{
    Number a("10", 2);
    Number b("2", 10);
    b.Print();
    cout<<(a==b);
    Number c("235", 10);
    c.Print();
    c.SwitchBase(5);
    c.Print();
    c.SwitchBase(14);
    cout<<"\n__\n";
    c.Print();
    --c;
    c.Print();
    b.Print();
    --b;
    b.Print();
}

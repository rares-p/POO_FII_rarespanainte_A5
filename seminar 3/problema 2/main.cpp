#include <iostream>
#include "Canvas.h"
using namespace std;

int main()
{
    Canvas a(10,10);
    a.Clear();
    a.DrawCircle(4,5,3,'*');
    a.Print();
    cout<<"\n---------------------\n";
    a.FillCircle(5,5,2,'*');
    a.Print();
    cout<<"\n---------------------\n";
    a.DrawRect(1,1,7,6,'@');
    a.Print();
    cout<<"\n---------------------\n";
    a.FillRect(3,2,8,6,'$');
    a.Print();
    cout<<"\n---------------------\n";
    a.SetPoint(3,7,'$');
    a.Print();
    a.Clear();
    cout<<"\n---------------------\n";
    a.DrawLine(1, 1, 6, 9,'$');
    a.Print();
}

#define _CRT_SECURE_NO_WARNINGS 0
#include <iostream>
#include "Math.h"

using namespace std;

int main()
{
    Math a;
    cout<<a.Add(2,7)<<'\n';
    cout<<a.Add(2,2,12)<<'\n';
    cout<<a.Add(10.2,21.3)<<'\n';
    cout<<a.Add(10.2,21.3,2.0)<<'\n';
    cout<<a.Mul(2,3)<<'\n';
    cout<<a.Mul(25,2,34)<<'\n';
    cout<<a.Mul(2.0,3.25)<<'\n';
    cout<<a.Mul(2.0,3.235,19.324)<<'\n';
    cout<<a.Add(10,1,2,3,4,5,6,7,8,9,10)<<'\n';
    cout<<a.Add("buna ", "ziua");
}

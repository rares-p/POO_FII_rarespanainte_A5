#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
    vector<int> calin;
    calin.push(2);
    calin.push(6);
    calin.insert(3, 5);
    calin.print();
}
#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
    vector<int> unvector;
    unvector.push(2);
    unvector.push(6);
    unvector.insert(7,unvector.count());
    unvector.insert(3, 3);
    unvector.push(8);
    unvector.push(1);
    unvector.push(8);
    cout << "Vectorul: ";
    unvector.print();
    cout << "Prima aparitie a lui 8: " << unvector.firstIndexOf(8) << '\n';
    cout << "Vectorul sortat (default crescator): ";
    unvector.sort();
    unvector.print();
}
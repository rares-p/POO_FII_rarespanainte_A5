#include <iostream>
#include "Sort.h"

using namespace std;

int main()
{
    int asd[] = {1, 4, 6};
    Sort a = {10, 1, 50};
    a.Print();
    a.BubbleSort(true);
    a.Print();

    Sort b = {30, 1, 50};
    b.InsertSort(true);
    b.Print();
    b = {asd, 2};
    b.Print();
    a = {asd + 1, 2};

    Sort c = {"1,5,2,234,65"};
    c.Print();
    c.QuickSort(true);
    c.Print();
    c.QuickSort();
    c.Print();
    printf("%d\n",c.GetElementsCount());
    printf("%d\n",c.GetElementFromIndex(3));
    return 0;
}

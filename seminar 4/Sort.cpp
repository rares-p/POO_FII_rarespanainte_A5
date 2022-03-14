#include "Sort.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
#include <iostream>
#include <cstring>

using namespace std;

Sort::Sort(int nr, int minn, int maxn)
{
    this->a = new int[nr];
    this->n = nr;
    time_t t;
	srand((unsigned)time(&t));
    for(int i = 0; i < nr; i ++)
    {
        int x = minn + rand()%(maxn - minn + 1);
        this->a[i] = x;
    }
}

Sort::Sort(int* b, int n)
{
    this->a = new int[n];
    this->n = n;
    for(int i = 0; i < n; a[i] = b[i], i ++);
}

Sort::Sort(): a(new int[5] {1, 2, 3, 4, 5})
{
    this->n = 5;
}

Sort::Sort(int count, ...)
{
    this->a = new int[count];
    va_list vl;
	va_start(vl, count);
	for (int i = 0; i < count; i ++)
	    a[i] = va_arg(vl, int);
	va_end(vl);
}

Sort::Sort(char* c)
{
    int dim = 0, k = 0;
    for(int i = 0; c[i] != '\0'; i ++)
        if(c[i] == ',')
            dim ++;
    if(dim == 0)
        return;
    this->a = new int[dim + 1];
    char* copyc = new char[strlen(c)];
    strcpy(copyc, c);
    char *p;
    p = strtok(copyc, ",");
    while(p)
    {
        a[k++] = atoi(p);
        p = strtok(nullptr, ",");
    }
    this->n = k;
}

void Sort::Print()
{
    for(int i = 0; i < this->n; printf("%d ", a[i++]));
    printf("\n");
}

void Sort::InsertSort(bool ascendent)
{
    for(int i = 1; i < this->n; i ++)
        for(int j = i; j > 0 && a[j] < a[j - 1] == !ascendent; j --)
            swap(this->a[j - 1], this->a[j]);
}

int Sort::part(int* a, int st, int dr, bool ascendent)
{
    time_t t;
	srand((unsigned)time(&t));
    int pivot = st + rand() % (dr - st + 1);
    swap(a[st], a[pivot]);
    int i, j;
    for(i = st + 1, j = dr; i <= j;)
    {
        for(;a[i] <= a[st] == !ascendent && i <= j; i ++);
        for(;a[j] >= a[st] == !ascendent && i <= j; j --);
        if(i <= j)
            swap(a[i], a[j]), i ++, j --;
    }
    i --;
    swap(a[st], a[i]);
    return i;
}

void Sort::qsort(int* a, int st, int dr, bool ascendent)
{
    int pivot = part(a, st, dr, ascendent);
    if(st < pivot - 1)
        qsort(a, st, pivot - 1, ascendent);
    if(pivot + 1 < dr)
        qsort(a, pivot + 1, dr, ascendent);
}

void Sort::QuickSort(bool ascendent)
{
    qsort(Sort::a, 0, this->n - 1, ascendent);
}

void Sort::BubbleSort(bool ascendent)
{
    for(int i = 0; i < this->n - 1; i ++)
        for(int j = 0; j < this->n - i - 1; j ++)
            if(this->a[j] > this->a[j + 1] == !ascendent)
                swap(this->a[j], this->a[j + 1]);
}

int Sort::GetElementsCount()
{
    return this->n;
}

int Sort::GetElementFromIndex(int index)
{
    if(index < 0 || this->n <= index)
        return 0;
    return this->a[index];
}

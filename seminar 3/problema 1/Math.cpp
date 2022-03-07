#include "Math.h"
#include <cstdarg>
#include <cstring>
#include <stdlib.h>

int Math::Add(int x, int y)
{
    return x + y;
}

int Math::Add(int x, int y, int z)
{
    return x + y + z;
}

int Math::Add(double x, double y)
{
    return ((int)(x + y));
}

int Math::Add(double x, double y, double z)
{
    return ((int)(x + y + z));
}

int Math::Mul(int x, int y)
{
    return x * y;
}

int Math::Mul(int x, int y, int z)
{
    return x * y * z;
}

int Math::Mul(double x, double y)
{
    return ((int)(x * y));
}

int Math::Mul(double x, double y, double z)
{
    return ((int)(x * y * z));
}

int Math::Add(int count,...)
{
    va_list a;
    va_start(a, count);
    int suma = 0, nr;
    for(int i=0; i<count; i++)
        nr=va_arg(a,int),suma+=nr;
    return suma;
}

char* Math::Add(const char* s1, const char* s2)
{
    if (s1 == nullptr or s2 == nullptr)
		return nullptr;
    int sizeAlloc;
    sizeAlloc=strlen(s1)+strlen(s2)+1;
    char* rez = new char[strlen(s1)+strlen(s2)+1];
    strcpy(rez,s1);
    strcat(rez,s2);
    return rez;
}

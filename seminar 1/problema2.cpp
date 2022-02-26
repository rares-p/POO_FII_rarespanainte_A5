#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
using namespace std;
int suma;
char s[256];
int numar(char* s)
{
    int nr=0;
    for(int i=0;i<strlen(s)-1;i++)
        nr=nr*10+(s[i]-'0');
    return nr;
}
int main()
{
    FILE* f;
    if (fopen_s(&f, "in.txt", "r") != 0)
    {
        printf("Eroare. Nu am putut deschide fisierul\n");
        return 0;
    }
    for(;fgets(s, 256, f);suma+=numar(s));
    printf("Suma numerelor este %d\n", suma);
    return 0;
}

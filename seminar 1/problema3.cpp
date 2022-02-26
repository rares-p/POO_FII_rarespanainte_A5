#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#define max(a,b) ((a>b)?(a):(b))
using namespace std;
int suma,n;
char s[256],*p,cuv[256][256];
void swaps(char* a,char* b)
{
    int n=max(strlen(a),strlen(b));
    for(int i=0; i<n; i++)
        swap(a[i],b[i]);
    a[n]=b[n]='\0';
}
int main()
{
    scanf("%[^\n]s", s);
    for(p=strtok(s," "); p; strcpy(cuv[n++],p),p=strtok(NULL," "));
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(strlen(cuv[i])<strlen(cuv[j])||strlen(cuv[i])==strlen(cuv[j])&&strcmp(cuv[i],cuv[j])>0)
                swaps(cuv[i],cuv[j]);
    for(int i=0; i<n; printf("%s\n",cuv[i++]));
    return 0;
}

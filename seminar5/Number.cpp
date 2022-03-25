#include "Number.h"
#include <cstring>
#include <iostream>
#define min(a,b) ((a<b)?(a):(b))
#define max(a,b) ((a>b)?(a):(b))

Number::Number(const char * value, int base)
{
    this->n = strlen(value);
    this->nr = new char[n + 1];
    for(int i = 0; i < n; i ++)
        this->nr[i] = value[n-i-1];
    this->nr[n] = '\0';
    this->baza = base;
}

Number::Number(const Number &a)
{
    this->baza = a.baza;
    this->n = a.n;
    this->nr = new char[strlen(a.nr) + 5];
    strcpy(this->nr, a.nr);
}

Number::Number(Number &&a)
{
    this->baza = a.baza;
    this->n = a.n;
    this->nr = new char[strlen(a.nr) + 5];
    strcpy(this->nr, a.nr);
    a.baza = a.n = 0;
    a.nr = nullptr;
}

Number& Number::operator=(Number &&a)
{
    if(this != &a)
    {
        this->baza = a.baza;
        this->n = a.n;
        this->nr = new char[strlen(a.nr) + 5];
        strcpy(this->nr, a.nr);
        a.baza = a.n = 0;
        a.nr = nullptr;
    }
    return *this;
}

Number::~Number()
{
    delete[] this->nr;
}

void Number::Print()
{
    for(int i = this->n - 1; i >= 0; std::cout<<this->nr[i--]);
    std::cout<<'\n';
}

int Number::GetBase()
{
    return this->baza;
}

int Number::GetDigitsCount()
{
    return this->n;
}

void Number::SwitchBase(int newBase)
{
    int p = 1;
    int nr = 0;
    for(int i = 0; i < this->n; i ++, p *= this->baza)
    {
        if(this->nr[i] >= '0' || this->nr[i] <= '9')
            nr += (this->nr[i] - '0') * p;
        else
            nr += (this -> nr[i] - 'A' + 10) * p;
    }
    this->nr = new char[256];
    p = 0;
    do
    {
        int t = nr % newBase;
        if(t < 10)
            this->nr[p] = ('0' + t);
        else
            this->nr[p] = ('A' + (t - 10));
        nr /= newBase;
        p ++;
    }
    while(nr);
    this->nr[p] = '\0';
    this->n = p;
}

Number operator+(const Number& a, const Number& b)
{
    Number ca=a, cb=b;
    ca.SwitchBase(10);
    cb.SwitchBase(10);
    char *stra, *strb, *strrez;
    strcpy(stra, ca.nr);
    strrev(stra);
    strcpy(strb, cb.nr);
    strrev(strb);
    int s = atoi(stra) + atoi(strb);
    int i = 0;
    do
    {
        strrez[i] = ('0' + char(s % 10));
        i ++;
        s /= 10;
    }
    while(s);
    Number rez(strrez, 10);
    rez.SwitchBase(max(ca.baza, cb.baza));
    return rez;
}

Number operator-(const Number& a, const Number& b)
{
    Number ca=a, cb=b;
    ca.SwitchBase(10);
    cb.SwitchBase(10);
    char *stra, *strb, *strrez;
    strcpy(stra, ca.nr);
    strrev(stra);
    strcpy(strb, cb.nr);
    strrev(strb);
    int s = atoi(stra) - atoi(strb);
    int i = 0;
    do
    {
        strrez[i] = ('0' + char(s % 10));
        i ++;
        s /= 10;
    }
    while(s);
    Number rez(strrez, 10);
    rez.SwitchBase(max(ca.baza, cb.baza));
    return rez;
}

bool Number::operator > (const Number& a)
{
    Number nr1=*this, nr2=a;
    nr1.SwitchBase(10);
    nr2.SwitchBase(10);
    char *str1, *str2;
    str1 = new char[nr1.n + 5];
    str2 = new char[nr2.n + 5];
    strcpy(str1, nr1.nr);
    strrev(str1);
    strcpy(str2, nr2.nr);
    strrev(str2);
    if(atoi(str1) > atoi(str2))
        return true;
    return false;
}

bool Number::operator >= (const Number& a)
{
    Number nr1=*this, nr2=a;
    nr1.SwitchBase(10);
    nr2.SwitchBase(10);
    char *str1, *str2;
    str1 = new char[nr1.n + 5];
    str2 = new char[nr2.n + 5];
    strcpy(str1, nr1.nr);
    strrev(str1);
    strcpy(str2, nr2.nr);
    strrev(str2);
    if(atoi(str1) >= atoi(str2))
        return true;
    return false;
}

bool Number::operator == (const Number& a)
{
    Number nr1=*this, nr2=a;
    nr1.SwitchBase(10);
    nr2.SwitchBase(10);
    char *str1, *str2;
    str1 = new char[nr1.n + 5];
    str2 = new char[nr2.n + 5];
    strcpy(str1, nr1.nr);
    strrev(str1);
    strcpy(str2, nr2.nr);
    strrev(str2);
    if(atoi(str1) == atoi(str2))
        return true;
    return false;
}

bool Number::operator <= (const Number& a)
{
    Number nr1=*this, nr2=a;
    nr1.SwitchBase(10);
    nr2.SwitchBase(10);
    char *str1, *str2;
    str1 = new char[nr1.n + 5];
    str2 = new char[nr2.n + 5];
    strcpy(str1, nr1.nr);
    strrev(str1);
    strcpy(str2, nr2.nr);
    strrev(str2);
    if(atoi(str1) <= atoi(str2))
        return true;
    return false;
}

bool Number::operator < (const Number& a)
{
    Number nr1=*this, nr2=a;
    nr1.SwitchBase(10);
    nr2.SwitchBase(10);
    char *str1, *str2;
    str1 = new char[nr1.n + 5];
    str2 = new char[nr2.n + 5];
    strcpy(str1, nr1.nr);
    strrev(str1);
    strcpy(str2, nr2.nr);
    strrev(str2);
    if(atoi(str1) < atoi(str2))
        return true;
    return false;
}

bool Number::operator-- ()
{
    for(int i = 0; i < this->n; i ++)
        this->nr[i] = this->nr[i + 1];
    this->n--;
}
bool Number::operator-- (int a)
{
    this->nr=(this->nr + 1);
    this->n--;
}
char Number::operator[](int a)
{
    return this->nr[a];
}

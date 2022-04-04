#include <iostream>

using namespace std;

float char_to_float(const char * temp)
{
    float nr = 0;
    bool positive = 1;
    if(*temp == '-')
        positive = 0, temp++;
    while((*temp) != '.' && (*temp) != 0)
        nr = nr * 10 + ((*temp) - '0'), temp ++;
    if(*temp == '.')
    {
        float m = 0.1;
        for(temp ++; *temp != 0; temp ++, m /= 10)
            nr = nr + m * ((*temp) - '0');
    }
    if(positive)
        return nr;
    return -nr;
}

float operator"" _Kelvin(const char * temp)
{
    return char_to_float(temp) - 273.15;
}


float operator"" _Kelvin(const char * temp, size_t sz)
{
    return char_to_float(temp) - 273.15;
}


float operator"" _Fahrenheit(const char * temp)
{
    return (char_to_float(temp) - 32) / 1.8;
}

float operator"" _Fahrenheit(const char * temp, size_t sz)
{
    return (char_to_float(temp) - 32) / 1.8;
}

int main()
{
    float a = 300_Kelvin;
    cout << a << '\n';
    float b = 120_Fahrenheit;
    cout << b << '\n';
}
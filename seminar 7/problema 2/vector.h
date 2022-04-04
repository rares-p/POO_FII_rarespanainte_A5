#include <iostream>

template<typename type>
class vector{
    type* array;
    int n = 0;
    unsigned int capacity = 0;
public:
    vector()
    {
        array = nullptr;
    }
    void push(type x)
    {
        type *newarray = new type[++n];
        for(int i = 0; i < n - 1; newarray[i] = array[i], i ++);
        newarray[n - 1] = x;
        delete[] array;
        array = newarray;
    }
    type pop()
    {
        return array[n - 1];
    }
    void remove()
    {
        type *newarray = new type[--n];
        for(int i = 0; i < n; newarray[i] = array[i], i ++);
        delete[] array;
        array = newarray;
    }
    void insert(type x, unsigned pos)
    {
        if(pos < 0 || pos > n)
            return;
        type *newarray = new type[++n];
        for(int i = 0; i < pos; newarray[i] = array[i], i ++);
        newarray[pos] = x;
        for(int i = pos + 1; i < n; i ++)
            newarray[i] = array[i - 1];
            delete[] array;
            array = newarray;
    }
    int count()
    {
        return n;
    }
    void print()
    {
        for(int i = 0; i < n; i ++)
            std :: cout << array[i] << ' ';
        std :: cout<<'\n';
    }
};
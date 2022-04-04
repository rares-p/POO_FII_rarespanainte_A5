template<typename type>
class vector{
    type* array;
    int n = 0;
public:
    void push(type x)
    {
        type *newarray = new type[++n];
        for(int i = 0; i < n - 1; newarray[i] = array[i], i ++);
        newarray[n - 1] = x;
        delete[] array;
        array = newarray;
    }
    void pop()
    {
        type *newarray = new type[--n];
        for(int i = 0; i < n; newarray[i] = array[i], i ++);
        delete[] array;
        array = newarray;
    }
    int count()
    {
        return n;
    }
};
template<typename type>
class vector{
    type* array;
    int n = 0;
    unsigned int capacity = 0;
public:
    vector()
    {
        array = new type[capacity];
    }
    void push(type x)
    {
        n++;
        if(n > capacity)
            capacity = capacity * 2 + (capacity == 0);
        type *newarray = new type[capacity];
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
        n--;
        if(n <= capacity / 2)
            capacity /= 2;
        type *newarray = new type[capacity];
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
    static bool ascendingsort(type a, type b)
    {
        return a < b;
    }
    void sort(bool(*criteriu)(type, type) = &ascendingsort)
    {
        for(int i = 0; i < n - 1; i ++)
            for(int j = i + 1; j < n; j ++)
                if(!criteriu(array[i], array[j]))
                {
                    type aux = array[i];
                    array[i] = array[j];
                    array[j] = aux;
                }
    }
    static bool firstIndexOfdefault(type a, type b)
    {
        return a == b;
    }
    int firstIndexOf(type x, bool(*criteriu)(type, type) = &firstIndexOfdefault)
    {
        for(int i = 0; i < n; i ++)
            if(criteriu(array[i], x))
                return i + 1;
        return -1;
    }
    type get(int index)
    {
        return array[index];
    }
    void set(type x, int index)
    {
        if(index < 0 || index >= capacity)
            return;
        array[index] = x;
    }
};
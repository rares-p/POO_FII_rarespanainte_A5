#include <tuple>
template<class K, class V>
class Map
{
public:
    K key[100];
    V value[100];
    unsigned index;
    struct Iterator
    {
        Map *map;
        unsigned index;
        Iterator(Map& x, unsigned newindex)
        {
            map = &x;
            this->index = newindex;
        }
        Iterator& operator++()
        {
            index++;
            return *this;
        }
        bool operator!=(Iterator& x)
        {
            return index != x.index;
        }
        auto operator*()
        {
            return std::make_tuple(map->key[index], map->value[index], index);
        }
    };
    Map()
    {
        index = 0;
    }
    Iterator begin()
    {
        return Iterator(*this, 0);
    }
    Iterator end()
    {
        return Iterator(*this, index);
    }
    V& operator[](K x)
    {
        for(int i = 0; i < index; i ++)
            if(x == key[i])
                return value[i];
        key[index] = x;
        return value[index++];
    }
    void operator=(V& newValue)
    {
        this->value = newValue;
    }
    void Set(const K& x, const V& v)
    {
        for (int i = 0; i < index; i ++)
        {
            if (key[i] == x)
            {
                value[i] = v;
                return;
            }
        }
        key[index] = x;
        value[index++] = v;
    }
    bool Get(const K& k, V& v)
    {
        for (int i = 0; i < index; i ++)
            if (key[i] == k)
            {
                v = value[i];
                return true;
            }
        return false;
    }
    int Count()
    {
        return index;
    }
    void Clear()
    {
        index = 0;
    }
    bool Delete(const K& k)
    {
        for (int i = 0; i < index; i ++)
            if (key[i] == k)
            {
                for (int j = i; j < index - 1; j ++)
                {
                    key[j] = key[j + 1];
                    value[j]=value[j + 1];
                }
                index --;
                return true;
            }
        return false;
    }

    bool Exists(const K& x)
    {
        for (int i = 0; i < index; i ++)
            if (key[i] == x)
                return true;
        return false;
    }

    bool Includes(const Map<K,V>& map)
    {
        for (auto[k, v, ind] : map)
            if (!(this->Exists(k)))
                return false;
        return true;
    }
};
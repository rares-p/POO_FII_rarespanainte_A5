class Number
{
    char *nr = nullptr;
    int n = 0, baza = 10;
public:
    Number(const char * value, int base); // where base is between 2 and 16
    ~Number();
    Number(const Number &a);
    Number(Number &&a);
    Number& operator=(Number &&a);
    friend Number operator+(const Number& a, const Number& b);
    friend Number operator-(const Number& a, const Number& b);
    bool operator > (const Number& a);
    bool operator >= (const Number& a);
    bool operator == (const Number& a);
    bool operator <= (const Number& a);
    bool operator < (const Number& a);
    bool operator--();
    bool operator-- (int a);
    char operator[] (int a);
    void SwitchBase(int newBase);
    void Print();
    int  GetDigitsCount(); // returns the number of digits for the current number
    int  GetBase(); // returns the current base
};

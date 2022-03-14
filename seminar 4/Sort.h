class Sort
{
    int* a, n;
public:
    Sort(int nr, int minn, int maxn);
    Sort();
    Sort(int* b, int n);
    Sort(int count, ...);
    Sort(char* c);

    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int GetElementsCount();
    int GetElementFromIndex(int index);

    int part(int* a, int st, int dr, bool ascendent);
    void qsort(int* a, int st, int dr, bool ascendent);
};

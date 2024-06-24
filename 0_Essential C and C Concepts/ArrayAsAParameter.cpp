#include <iostream>
using namespace std;

int *funt(int size)
{
    int *p;
    p = new int[size];
    for (int i = 0; i < size; i++)
    {
        p[i] = i + 1;
    }
    return p;
}

int main()
{
    int *ptr;
    int n = 4;

    ptr = funt(n);
    for( int i = 0; i < n; i++){
        cout << ptr[i]<<" ";
    }

    return 0;
}
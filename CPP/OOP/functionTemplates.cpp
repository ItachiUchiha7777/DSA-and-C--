#include <iostream>
#include <algorithm>
using namespace std;
// Imagine we have same data type but for that we need different functions so instead we can make use function template for same operations with different data type

// T will be the data type
template <class T>
void bubbleSort(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
}
int main()
{

    // Using
    int a[10] = {20, 50, 40, 60, 55, 8, 4, 7, 9, 10};
    int arraySize = sizeof(a) / sizeof(a[0]);
    bubbleSort<int>(a, arraySize);
    printf("Sorted array: ");
    for (int i = 0; i < arraySize; i++)
        cout << a[i] << " ";
    cout << endl;


//Using same function for different data type


    char charArray[10] = {'a', 'h', 'h', 's', 'c', 't', 'p', 'v', 'z', '1'};
    int charSize = sizeof(charArray) / sizeof(charArray[0]); 
    bubbleSort<char>(charArray, charSize);
    printf("Sorted array: ");
    for (int i = 0; i < charSize; i++)
        cout << charArray[i] << " ";
    cout << endl;

    return 0;
}
#include <iostream>
int main()
{
    int A[5];
    int *p;
    
    // Dynamic array allocation in c++
    //   p=new int[5];

    // Dynamic array allocation in C
    p = (int *)malloc(5 * sizeof(int));

    // deallocation in C++
    // delete [] p;

    // deallocation in C
    free(p);
}
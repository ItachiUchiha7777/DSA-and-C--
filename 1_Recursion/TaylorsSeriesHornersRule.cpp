#include <stdio.h>

double e(int x, int n) {
    static double s;


    if (n == 0)
        return s;
    s=1+x*s/n;
    return e(x,n-1);
    
}

int main() {
    int x = 1; // Value of x in e^x
    int n = 10; // Number of terms in the series
    double result = e(x, n);
    printf("e^%d using %d terms is: %lf\n", x, n, result);
    return 0;
}

#include <stdio.h>

double e(int x, int n) {
    static double p = 1, f = 1;
    double r;

    if (n == 0)
        return 1;
    else {
        r = e(x, n-1);
        p *= x;
        f *= n;
        return r + p/f;
    }
}

int main() {
    int x = 1; // Value of x in e^x
    int n = 10; // Number of terms in the series
    double result = e(x, n);
    printf("e^%d using %d terms is: %lf\n", x, n, result);
    return 0;
}

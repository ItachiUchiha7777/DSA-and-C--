#include <iostream>
int factorial(int n){
    if (n==0) return 1;
    else return factorial(n-1)*n;
}
int main(){
    int c=factorial(5);
    printf("%d\n", c);
}
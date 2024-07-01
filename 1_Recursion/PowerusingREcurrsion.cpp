#include <iostream>
int power(int n,int m){
    if (m==0) return 1;
    else return power(n,m-1)*n;
}
int main(){
    int c=power(2,4);
    printf("%d\n", c);
}
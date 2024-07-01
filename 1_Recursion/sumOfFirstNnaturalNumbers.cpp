#include <iostream>
int sum(int n){
    if (n==0) return 0;
    else return sum(n-1)+n;
}
int main(){
    int c=sum(5);
    printf("%d\n", c);
}
#include <iostream>

int func(int n){
    if (n>10){
        return n-10;
    }return func(func(n+11));
}

int main(){
int r;
r=func(200);
printf("%d\n", r);
return 0;

}
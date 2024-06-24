#include <iostream>
int recc(int n){
    if(n>0){
    printf("%d ",n);
    }
    n-=1;
    recc(n);
};

int main(){
    recc(10);
}
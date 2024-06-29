/*
funcA(){
    funcB();
};
funcB(){
    funcA();
};


*/




#include <stdio.h>
void func2(int n);


void func1(int n){
    if(n>0){
        printf("%d\n",n);
        func2(n-1);
    };
};

int main(){
    printf("Here is the output:\n");
    func1(20);
}
void func2(int n){
    if(n>1){
        printf("%d\n",n);
        func1(n/2);
    };}
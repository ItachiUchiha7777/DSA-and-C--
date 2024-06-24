#include <iostream>

void fun(int A[],int n){
        for(int i=0;i<n;i++){
            std::cout<<A[i]<<" "<<std::endl;
        }
};

int main(){
    int a[]={2,4,6,4,6};
    int n=5;
   fun(a,n);
    return 0;
}
#include <iostream>

// -----------------this funciton will give result 15 at value 5----------------------------


// int fun(int n){
//     if(n>0){
//         return fun(n-1)+n;
//     }
//     return 0;
// }


// -----------------this funciton will give result 25 at value 5----------------------------


int fun(int n){
    static int x=0;
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}




int main(){
    int r;
    r=fun(5);
    printf("%d\n",r);
    return 0;
}
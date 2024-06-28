/*
Tail recurison  is the the recurion in which the functin calls itself at the end
vice versa for Head

for tail recurison while loop is better for space complexity and


*/
/*
#include <iostream>
void fun(int n){
    if(n>0){
        printf("%d\n",n);
        fun(n-1);
    }
 
}

int main(){
    fun(3);
}
*/


// ---------------------------------Now Head recurr---------------------------------


/*

#include <iostream>
void fun(int n){
    if(n>0){
        fun(n-1);

        printf("%d\n",n);
    }
 
}

int main(){
    fun(3);
}

*/
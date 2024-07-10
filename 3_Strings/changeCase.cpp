#include <iostream>
int main(){
    char a[]="Welcome";
    int i;
    for(i=0;a[i]!='\0';i++){
        if(a[i]>=65 && a[i]<=90){
            a[i]+=32;
        }else if(a[i]>='a' and a[i]<='z'){
            a[i]-=32;
        } 
        printf("%C ", a[i]);

    }
}
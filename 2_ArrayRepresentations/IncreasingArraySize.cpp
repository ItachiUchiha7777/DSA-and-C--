#include <iostream>
int main(){
    int *p,*q;
    int i;
    q=(int*)malloc(sizeof(int)*10);
    for(i=0;i<5;i++){
        q[i]=p[i];
        }
    free(p);
    p=q;
    q=NULL;
    for(i=0;i<5;i++){
        printf("%d \n",p[i]);
    return 0;
}}
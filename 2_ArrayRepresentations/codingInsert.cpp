#include <stdio.h>
#include <iostream>

struct Array
{
    int A[20];
    int size;
    int length;
};
void Display(struct Array  arr){
    int i;
    printf("\nElement are \n:");
    for(int i=0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
}



int main(){

}
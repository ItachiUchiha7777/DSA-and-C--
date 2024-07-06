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
    printf("\nElement are:\n");
    for(int i=0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
}
void Insert(struct Array *arr,int index, int x){
    if (index>=0 && index<=arr->length){
    for( int i=arr->length;i>index;i--){
        arr->A[i] = arr->A[i-1];
    }
    arr->A[index]=x;
        arr->length++; 
    }    
}

int Delete(struct Array *arr,int index )
{
    int x=0;
    if(index>=0 && index<arr->length){
        x=arr->A[index];
        for(int i=index;i<arr->length-1;i++){
            arr->A[i]=arr->A[i+1];
        
        }
        arr->length--;
        return x;
    }
    return 0;
};


int main(){
struct Array arr={{2,3,4,5,6},10,5};
Insert(&arr,5,10);
Delete(&arr,0);
Display(arr);
}
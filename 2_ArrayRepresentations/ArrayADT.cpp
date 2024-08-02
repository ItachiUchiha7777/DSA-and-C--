#include <stdio.h>
#include <iostream>

struct Array
{
    int A[20];
    int size;
    int length;
};

//Display

void Display(struct Array  arr){
    int i;
    printf("\nElement are:\n");
    for(int i=0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
}

//Insert 

void Insert(struct Array *arr,int index, int x){
    if (index>=0 && index<=arr->length){
    for( int i=arr->length;i>index;i--){
        arr->A[i] = arr->A[i-1];
    }
    arr->A[index]=x;
        arr->length++; 
    }    
}

//Delete

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

//swap

void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

//Linear search


int LinearSearcher(struct  Array *arr,int key){ //
int i;
for(int i=0;i<arr->length;i++){
    if(key==arr->A[i]){
        swap(&arr->A[i],&arr->A[i+1]);
        return i;
    }
}
return -1;
}


//Binary Search
int BinarySearch(struct Array arr,int key){
    int l,m,h; //low mid high
    l=0;
    h=arr.length-1;
    while(l<=h){
        m=(l+h)/2; 
            if(key==arr.A[m])
            return m;
            else if(key<arr.A[m])
            h=m-1;
            else 
            l=m+1;
    }

        return -1;
}



//Reverse Binary Search
int RecBinarySearch(int a[] ,int l,int h,int key){
    int m; //mid
    if(l<=h){
        m=(l+h)/2;
        if(key==a[m])
            return m;
        else if(key<a[m])
            return RecBinarySearch(a,l,m-1,key);
        else
            return RecBinarySearch(a,m+1,h,key);
    }
    return -1;
}



int main(){
struct Array arr={{2,3,4,5,6},10,5};
printf("%d\n",BinarySearch(arr,3));
printf("%d\n",RevBinarySearch(arr.A,0,arr.length,3));

Insert(&arr,5,10);
Delete(&arr,0);

Display(arr);
}
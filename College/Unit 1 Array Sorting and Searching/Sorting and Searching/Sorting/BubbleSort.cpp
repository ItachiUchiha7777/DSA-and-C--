// No of passes =n-1

#include <iostream>

void printArray(int *A,int n ){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}

void bubbleSort(int *A,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if (A[j]>A[j+1]){
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    printf("\n");
}


void bubbleSortAdaptive(int *A,int n){
    int temp;
    int isSorted=10;
   for(int i=0;i<n;i++){
         printf("Working on pass number %d\n", i+1);
          isSorted = 1;
        for(int j=0;j<n-1-i;j++){
            if (A[j]>A[j+1]){
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                isSorted=0;
            }
        }
        if(isSorted){
            return;
        }
    }
}

int main() {
    int A[]={12,581,56,45,8};
    int n=5;
    std::cout<<"Before Sorting"<<std::endl;
    printArray(A,n);
    bubbleSort(A,n);
    std::cout<<"After Sorting"<<std::endl;
    printArray(A,n);

    return 0;
}
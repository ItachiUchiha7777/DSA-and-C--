#include <stdio.h>
#include <stdlib.h>

struct Node*f=NULL;
struct Node *r=NULL;



struct Node{
    int data;
    struct Node *next;
};

void llt(struct Node *ptr){
    printf("Printing the elements of ll\n");
    while(ptr!=NULL){
        printf("%d ");
        ptr=ptr->next;
    }
}

void enqueue(int val){
    struct Node *n=(struct Node *)malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Queue is full");
    }else{
        n->data=val;
        n->next=NULL;
        if(f==NULL){
            f=r=n;
        }else{
            r->next=n;
            r=n;
        }
    }
}

int dequeue(){
    int val=-1;
    struct Node *ptr   =f;
    if(f==NULL){
        printf("Queue is Empty\n");
    }else{
        f=f->next;
        val=ptr->data;
        free(ptr);
    }
    return val;
}

int main(){

}
#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node * next;
};


void lltraversal(struct Node *ptr){
    while(ptr!=NULL){
        cout<<"Ele "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}


int main(){
     struct Node *head, *second, *third;
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 66;
    third->next = NULL;
    lltraversal(head);
    return 0;
}
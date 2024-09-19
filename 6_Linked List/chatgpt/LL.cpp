#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next; // Next node ke lie pointer
    Node(int value)
    { // constructor
        data = value;
        next = nullptr; // Naya node ka pointer sabse pehle null rahega
    }
};

class LL
{
public:
    Node *head;
    LL()
    {
        head = nullptr; // sabse phle to list khali rahega
    }
    void append(int value);
    void insertAtPosition(int value, int position);
    void pop();
    void removeAt(int position);
    void bubbleSort();
    void reverse();
    void display();
};

void LL::pop(){   //remove  the last element
    if(head==nullptr) return ;
    if(head->next=nullptr){
        delete head;
        head=nullptr;
        return;
    }
    Node* temp = head;
    // Traverse to the second last node
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    // Delete the last node
    delete temp->next;
    temp->next = nullptr;
}


void LL :: removeAt(int position){
    if(head==nullptr) return;
    if(position==0){
        Node* temp=head;
        head=head->next;
        delete  temp;
        return ;
    }

    Node* temp=head;
    for(int i=0;i<position-1 && temp!= nullptr ;i++){
        temp=temp->next;
    }
    if(temp!=nullptr && temp->next!=nullptr){
        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;  // Delete the node
    }
}

void LL :: append(int value)
{
    Node *newNode = new Node(value);
    if (head == nullptr)
    {
        head = newNode;
    }else{
        Node* temp=head;
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
}

void LL::display(){
    Node* temp=head;
    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}
int main() {
    LL list;
    
    list.append(10);
    list.append(20);
    list.append(30);
    list.removeAt(1);

    list.display();
    return 0;
}
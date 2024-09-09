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

void LL :: append(int value)
{
    Node *newNode = new Node(value);
    if (head == nullptr)
    {
        head = newNode;
    }else{
        Node* temp=head;
        while(temp->next != nullptr){
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
    list.display();
    return 0;
}
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};
class LL
{
public:
    Node *head;
    LL()
    {
        head = nullptr;
    }
    void append(int val);
    void insertAtfirst(int val);
    void pop();
    void insertAtPos(int pos);
    void removerAtpos(int pos);
    void display();
};

void LL::append(int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void LL::insertAtfirst(int val){
    Node *temp=new Node(val);
    temp->next=head;
    head=temp;
}


void LL::pop(){
    Node *temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
}

void LL::display()
{
    Node *temp = head;
    while (temp!= nullptr)
    {
        cout << temp->data << " ";
        temp=temp->next;

    }
}

int main()
{
    LL ll;
    ll.append(5);
    ll.append(6);
    ll.append(7);
    ll.append(8);

    ll.pop();
    ll.display();
    return 0;
}
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
    }
};

class Q
{
public:
    Node *front;
    Node *rear;

    Q()
    {
        front = rear = nullptr;
    }
    void enqueue(int val)
    {
        Node *newNode = new Node(val);
        if (front ==nullptr)
        {
            front = rear = newNode;
            cout<<rear->data<<" enqueued to the queue"<<endl;

        }
        else
        {
        
            rear->next=newNode;
            rear = newNode;
            cout<<rear->data<<" enqueued to the queue"<<endl;
        }
    }

    bool isEmpty()
    {
        return front == nullptr;
    }

    void dequeue()
    {
         if(isEmpty()){
            cout<<"The queue is empty"<<endl;
            return;
        }
        Node *temp = front;
        int retval = front->data;
        front = front->next;
        delete temp;
        cout<<retval<<" dequeue from the queue"<<endl;
    }

    void display()
    {
         if (isEmpty())
        {
            cout << "Queue is empty, nothing to display!" << endl;
            return;
        }
        Node *temp = front;
        cout<<"Displaying the whole queue"<<endl;
        while (temp != nullptr)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
        cout<<"Displaying complete"<<endl;
    }
    void peek(){
         if(isEmpty()){
            cout<<"The queue is empty"<<endl;
            return;
        }
        cout<<front->data<<" is at the top"<<endl;
    }
};


int main(){
    Q q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.peek();

    q.dequeue();
    q.display();

    q.peek();

    q.dequeue();
    q.dequeue();
    q.display();

    q.peek();

    return 0;
}
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class queue
{
    node *front;
    node *back;

public:
    queue()
    {
        front = NULL;
        back = NULL;
    }

    void push(int x)
    {
        node *n = new node(x);

        if (front == NULL)
        {
            back = n;
            front = n;
            return;
        }

        back->next = n;
        back = n;
    }
    void pop()
    {
        if (front == NULL)
        {
            cout << "Queue underflow" << endl;
            return;
        }
        node *todelete = front;
        front = front->next;
        delete todelete;
    }

    int peeek()
    {
        if (front == NULL)
        {
            cout << "Queue underflow" << endl;
            return -1;
        }
        return front->data;
    }
    bool isempty()
    {
        return front == NULL;
    }
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "Front element: " << q.peeek() << endl;
    q.pop();
    cout << "after pop: " << q.peeek() << endl;
    q.pop();
    q.pop();
    q.pop();
    cout << "Isempty? " << (q.isempty() ? "Yes" : "No") << endl;

    return 0;
}
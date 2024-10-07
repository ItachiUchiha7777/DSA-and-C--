#include <iostream>
using namespace std;

class Stack{
    int *arr;
    int top;
    int capacity;
    public:
    Stack(int size){
        arr=new int[size];
        capacity=size;
        top=-1;
    }
    ~Stack(){
        delete[] arr;
    }
    void push(int x){
        if(top==capacity-1){
            cout<<"Stack overflow\n";
        }arr[++top]=x;
        cout<<x<<" pushed into the stack\n";
    }
    int pop(){
        if(top==-1){
            cout<<"Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }
    int peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    int size() {
        return top + 1;
    }
};

int main(){
 int size;
    cout << "Enter the size of the stack: ";
    cin >> size;

    Stack s(size);

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element is " << s.peek() << endl;
    cout << s.pop() << " popped from stack\n";

    cout << "Top element is " << s.peek() << endl;

    if (s.isEmpty()) {
        cout << "Stack is empty\n";
    } else {
        cout << "Stack is not empty\n";
    }

    return 0;
}
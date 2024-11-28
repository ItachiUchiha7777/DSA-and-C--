#include <iostream>
using namespace std;

class Node{

    
    public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};
class Stack{
    private:
    Node* top;
    public:
        Stack(){
            top=nullptr;
        }

        void push(int val){
            Node *newNode= new Node(val);
            newNode->next=top;
            top=newNode;
        }

        bool isEmpty(){
            return top==nullptr;
        }

        int pop(){
            if(isEmpty()){
                cout<<"The Stack is Empty";
                return -1;
            }
            Node* temp=top;
            int retval=top->data;
            top=temp->next;
            delete temp;
            return retval;
        }
        int peek(){
            if(isEmpty()){
                cout<<"The Stack is Empty";
                return -1;   
            }
            return top->data;

        }

        void display(){
            Node *temp=top;
            while(temp!=nullptr){
                    cout<<temp->data<<endl;
                    temp=temp->next;
            }
        }
};

int main(){
Stack s;
s.push(5);
s.push(6);

s.display();
cout<<"Using pop operation"<<endl;
s.pop();
s.display();
return 0;
}
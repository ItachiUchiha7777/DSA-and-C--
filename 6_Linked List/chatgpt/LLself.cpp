#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LL {
public:
    Node *head;

    LL() {
        head = nullptr;
    }

    void append(int val);
    void insertAtFirst(int val);
    void pop();
    void insertAtPos(int pos, int val);
    void removeAtPos(int pos);
    void display();
};

void LL::append(int val) {
    Node *newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node *temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void LL::insertAtFirst(int val) {
    Node *temp = new Node(val);
    temp->next = head;
    head = temp;
}



void LL::pop() {
    if (head == nullptr) {
        return;
    }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    Node *temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}

void LL::insertAtPos(int pos, int val) {
    if (pos < 0) {
        return;
    }
    if (pos == 0) {
        insertAtFirst(val);
        return;
    }

    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 0; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void LL::removeAtPos(int pos) {
    if (head == nullptr) {
        return;
    }
    if (pos < 0) {
        return;
    }

    Node *temp = head;

    if (pos == 0) {
        head = temp->next;
        delete temp;
        return;
    }

    for (int i = 0; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr) {
        return;
    }

    Node *nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}

void LL::display() {
    Node *temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    LL ll;
    ll.append(5);
    ll.append(6);
    ll.append(7);
    ll.append(8);

    cout << "List before popping: ";
    ll.display();

    ll.pop();
    cout << "List after popping: ";
    ll.display();

    ll.insertAtPos(1, 10);
    cout << "List after inserting 10 at position 1: ";
    ll.display();

    ll.removeAtPos(2);
    cout << "List after removing node at position 2: ";
    ll.display();

    return 0;
}

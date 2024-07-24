#include <iostream>
#include <string>

class Node {
public:
    std::string val;
    Node* left;
    Node* right;

    Node(std::string val) {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

int main() {

    Node* a = new Node("a");
    Node* b = new Node("b");
    Node* c = new Node("c");
    Node* d = new Node("d");
    Node* e = new Node("e");
    Node* f = new Node("f");

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;

    printf("        %s\n", a->val.c_str());
    printf("    %s       %s\n", b->val.c_str(), c->val.c_str());
    printf(" %s    %s        %s\n", d->val.c_str(), e->val.c_str(), f->val.c_str());
    delete a;
    delete b;
    delete c;
    delete d;
    delete e;
    delete f;

    return 0;
}
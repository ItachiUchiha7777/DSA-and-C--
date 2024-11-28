#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if (root != NULL)
    {
        preorder(root->left);
        preorder(root->right);
        printf("%d", root->data);
    }
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        preorder(root->right);
        printf("%d", root->data);

        preorder(root->left);
    }
}

void search(struct node *root, int key)
{
    if (root == NULL)
    {
        return 0;
    }

    if (key == root->data)
    {
        return 1;
    }
    else if (key < root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}

void insert(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;

        if (key == root->data)
        {
            return 0;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct node *new = createNode(key);
    if (key < prev->data)
    {
        prev->left = new;
    }
    else
    {
        prev->right = new;
    }
}
// void deletion(struct node *root,int val){
// struct node *prev = NULL;
//     while (root->data= NULL)
//     {
//         prev = root;

//         if (val == root->data)
//         {
//             return 0;
//         }
//         else if (val < root->data)
//         {
//             root = root->left;
//         }
//         else
//         {
//             root = root->right;
//         }
//     }
//    free(root);
// }

void isBST(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }prev=root;
        return isBST(root->right);
    }else{
        return 1;
    }
}

int main()
{
}
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data, height;
    struct Node *left, *right;
};

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int height(struct Node *n)
{
    if (n == NULL)
        return 0;

    return n->height;
}

struct Node* newNode(int data)
{
    struct Node *n = (struct Node*)malloc(sizeof(struct Node));

    n->data = data;
    n->height = 1;
    n->left = NULL;
    n->right = NULL;

    return n;
}

struct Node* rightRotate(struct Node *y)
{
    struct Node *x = y->left;
    struct Node *t = x->right;

    x->right = y;
    y->left = t;

    y->height = 1 + max(height(y->left), height(y->right));
    x->height = 1 + max(height(x->left), height(x->right));

    return x;
}

struct Node* leftRotate(struct Node *x)
{
    struct Node *y = x->right;
    struct Node *t = y->left;

    y->left = x;
    x->right = t;

    x->height = 1 + max(height(x->left), height(x->right));
    y->height = 1 + max(height(y->left), height(y->right));

    return y;
}

int balance(struct Node *n)
{
    if (n == NULL)
        return 0;

    return height(n->left) - height(n->right);
}

struct Node* insert(struct Node *root, int data)
{
    if (root == NULL)
        return newNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);

    else if (data > root->data)
        root->right = insert(root->right, data);

    else
        return root;

    root->height = 1 + max(height(root->left), height(root->right));

    int b = balance(root);

    if (b > 1 && data < root->left->data)
        return rightRotate(root);

    if (b < -1 && data > root->right->data)
        return leftRotate(root);

    if (b > 1 && data > root->left->data)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if (b < -1 && data < root->right->data)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main()
{
    struct Node *root = NULL;

    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 10);
    root = insert(root, 25);
    root = insert(root, 40);

    printf("AVL Tree: ");
    inorder(root);

    return 0;
}

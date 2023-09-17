#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}node;

node *createTree(int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}

int main()
{
    node *root = createTree(64);
    root->left = createTree(34);
    root->right = createTree(83);
    root->left->left = createTree(23);
    root->left->right = createTree(31);

    return 0;
}
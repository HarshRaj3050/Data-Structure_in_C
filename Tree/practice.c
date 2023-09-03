#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}node;

node *tree(int data)
{
    node *n = (node *)malloc(sizeof(node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preOrder(node *root)
{
    if(root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);

    }
}

int main()
{
    node *p = (node *)malloc(sizeof(node));
    node *root  = tree(64);
    node *p1 = tree(82);
    node *p2 = tree(19);

    root->left = p1;
    root->right = p2;

    preOrder(root);
    return 0;
}
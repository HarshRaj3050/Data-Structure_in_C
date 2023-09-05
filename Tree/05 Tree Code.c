#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}node;

node *createNode(int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr ->data = data;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}

int main()
{
    node *root = createNode(63);
    node *p1 = createNode(29);
    node *p2 = createNode(53);
    node *p3 = createNode(82);

    root->left = p1;
    root->right = p2;
    p1->left = p3;
    
    
    return 0;
}
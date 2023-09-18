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

void preOrder(node *root)
{
    if(root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(node *root)
{
    if(root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int main()
{
    node *root = createTree(64);
    root->left = createTree(34);
    root->right = createTree(83);
    root->left->left = createTree(23);
    root->left->right = createTree(31);

    printf("Print the PreOrder\n");
    preOrder(root);
    printf("\n\nPrint the InOrder\n");
    inOrder(root);

    return 0;
}
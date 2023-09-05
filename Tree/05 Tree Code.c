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

void preOrder(node *root)
{
    if(root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

int isBST(node *root)
{
    static node *prev = NULL;
    if(root!=NULL)
    {
        if(!isBST(root->left))
        {
            return 0;
        }
        if(prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}

int main()
{
    node *root = createNode(63);
    root->left = createNode(38);
    root->right = createNode(98);
    root->left->left = createNode(18);
    
    preOrder(root);
    printf("\n");
    printf("%d", isBST(root));

    
    return 0;
}
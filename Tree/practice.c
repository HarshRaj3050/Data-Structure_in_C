// InOrder Traversal in a Binary Tree.

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

node *createNode(int data)
{
    node *n = (node *)malloc(sizeof(node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
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
// Constructing the root node - Using Function (Recommended)
    node *root = createNode(5);
    root->left = createNode(3);
    root->right = createNode(6);
    root->left->left = createNode(7);
    root->left->right = createNode(2);


    /* Finally The tree looks like this:
                5
               / \
              3   6
             / \
            7   2  
    */
   
    node *root = createNode(5);
    root->left = createNode(3);
    root->right = createNode(6);
    root->left->left = createNode(7);
    root->left->right = createNode(2);


}
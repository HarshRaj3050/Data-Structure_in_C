// Preorder Traversal in a Binary Tree

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
// Constructing the root node - Using Function (Recommended)
    node *p = createNode(4);
    node *p1 = createNode(1);
    node *p2 = createNode(6);
    node *p3 = createNode(5);
    node *p4 = createNode(2);

    /* Finally The tree looks like this:
                4
               / \
              1   6
             / \
            5   2  
    */
   
// Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    preOrder(p);
    return 0;
}
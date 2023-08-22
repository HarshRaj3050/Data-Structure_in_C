// PostOrder Traversal in a Binary Tree.

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

void postOrder(node *root)
{
    if(root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
// Constructing the root node - Using Function (Recommended)
    node *p = createNode(8);
    node *p1 = createNode(7);
    node *p2 = createNode(4);
    node *p3 = createNode(9);
    node *p4 = createNode(3);

    /* Finally The tree looks like this:
                8
               / \
              7   4
             / \
            9   3  
    */
   
// Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

// Function call
    printf("\nInorder traversal of binary tree is : ");
    postOrder(p);
    return 0;
}
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
/* 
Constructing the root node - Using Function
    node *p = createNode(5);
    node *p1 = createNode(3);
    node *p2 = createNode(6);
    node *p3 = createNode(7);
    node *p4 = createNode(2);

Finally The tree looks like this:
                5
               / \
              3   6
             / \
            7   2  
    
Linking the root node with left and right children.
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;  */
    

// Constructing the root node (Recommended for small Tree) and
// Linked the root node with left and right children. (Recommended for small Tree)
    node *p = createNode(5);
    p->left = createNode(3);
    p->right = createNode(6);
    p->left->left = createNode(7);
    p->left->right = createNode(2);    

// Function call
    printf("\nInorder traversal of binary tree is : ");
    inOrder(p);
    return 0;
}
// Implementing Binary Trees in C

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

node * tree(int data)
{
    node *n = (node *)malloc(sizeof(node)); // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left children to NULL
    n->right = NULL; // Setting the right children to NULL
    return n;
}

int main()
{
    node *p = (node *)malloc(sizeof(node));

/*
    // Constructing the root node
    struct node *p;
    p = (struct node *) malloc(sizeof(struct node));
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    // Constructing the second node
    struct node *p1;
    p1 = (struct node *) malloc(sizeof(struct node));
    p->data = 1;
    p1->left = NULL;
    p1->right = NULL;

    // Constructing the third node
    struct node *p2;
    p2 = (struct node *) malloc(sizeof(struct node));
    p->data = 4;
    p2->left = NULL;
    p2->right = NULL;
*/

// Constructing the root node - Using Function (Recommended)
    node *root = tree(56);
    node *p1 = tree(35);
    node *p2 = tree(93);

// Linking the root node with left and right children
    root->left = p1;
    root->right = p2;

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int elem;
    struct node *left, *right;
} *NODE;

void inorder(NODE R);
NODE createNode(int x);
void insert(NODE *R, int x); // Used commonly with BST as values are in descending order

int main()
{
    NODE root = NULL;

    insert(&root, 55);
    insert(&root, 23);
    insert(&root, 89);
    insert(&root, 27);
    insert(&root, 14);
    insert(&root, 3);
    insert(&root, 71);
    insert(&root, 95);

    printf("Inorder traversal:\n");
    inorder(root);

    return 0;
}

void inorder(NODE R)
{
    if (R != NULL)
    {
        inorder((*R).left);
        printf("%d ", (*R).elem);
        inorder((*R).right);
    }
}

NODE createNode(int x)
{
    NODE n = calloc(1, sizeof(struct node));
    (*n).elem = x;
}

void insert(NODE *R, int x)
{
    // Case 1: Recurse down left subtree (< case)
    // Case 2: Recurse down right subtree (> case)
    // Case 3: Create a new node (found a NULL leaf) (Base Case)

    if (*R == NULL)
    {
        *R = createNode(x);
    }
    else if (x < (**R).elem)
    {
        insert(&(**R).left, x);
    }
    else if (x > (**R).elem)
    {
        insert(&(**R).right, x);
    }
}
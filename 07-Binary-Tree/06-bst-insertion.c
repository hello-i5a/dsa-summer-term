#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int elem;
    struct node *left, *right;
} *NODE;

void inorder(NODE R); // Used commonly with BST as values are in ascending order
void preoder(NODE R);
void postorder(NODE R);
NODE createNode(int x);
void insert(NODE *R, int x); // Pointer to pointer

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

    printf("Inorder traversal: ");
    inorder(root);

    printf("\nPreorder traversal: ");
    preoder(root);

    printf("\nPostorder traversal: ");
    postorder(root);

    return 0;
}

void inorder(NODE R)
{
    if (R != NULL)
    {
        inorder((*R).left);  // Traverse to the left subtree
        inorder((*R).right); // Traverse to the right subtree
        printf("%d ", (*R).elem);
    }
}

void preoder(NODE R)
{
    if (R != NULL)
    {
        printf("%d ", (*R).elem);
        preoder((*R).left);
        preoder((*R).right);
    }
}

void postorder(NODE R)
{
    if (R != NULL)
    {
        postorder((*R).left);
        postorder((*R).right);
        printf("%d ", (*R).elem);
    }
}

NODE createNode(int x)
{
    NODE newNode = calloc(1, sizeof(struct node));
    (*newNode).elem = x;

    return newNode;
}

void insert(NODE *R, int x)
{
    // Case 1: Recurse left subtree (< case)
    // Case 2: Recurse right subtree (> case)
    // Case 3: Found a NULL leaf case = create new node (Base case)

    if (*R == NULL)
    {
        *R = createNode(x);
    }
    else if (x < (**R).elem)
    {
        insert(&(**R).left, x); // Traverse to the left subtree
    }
    else if (x > (**R).elem)
    {
        insert(&(**R).right, x); // Traverse to the right subtree
    }
}
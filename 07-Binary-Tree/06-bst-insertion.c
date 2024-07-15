#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int elem;
    struct node *left;
    struct node *right;
} *NODE;

void preorder(NODE T);
void postorder(NODE T);
void inorder(NODE T);
NODE createNode(int x);
void insert(NODE *T, int x);

int main()
{
    NODE root = NULL;

    insert(&root, 55);
    insert(&root, 23);
    insert(&root, 89);
    insert(&root, 14);
    insert(&root, 27);
    insert(&root, 89);
    insert(&root, 95);
    insert(&root, 101);

    printf("Preorder traversal:\n");
    preorder(root);
    printf("\n");

    printf("Postorder traversal:\n");
    postorder(root);
    printf("\n");

    printf("Inorder traversal:\n");
    inorder(root);
    printf("\n");

    return 0;
}

void preorder(NODE T)
{
    if (T != NULL)
    {
        printf("%d ", (*T).elem);
        preorder((*T).left);
        preorder((*T).right);
    }
}

void postorder(NODE T)
{
    if (T != NULL)
    {
        postorder((*T).left);
        postorder((*T).right);
        printf("%d ", (*T).elem);
    }
}

void inorder(NODE T)
{
    if (T != NULL)
    {
        inorder((*T).left);
        printf("%d ", (*T).elem);
        inorder((*T).right);
    }
}

NODE createNode(int x)
{
    NODE new = calloc(1, sizeof(struct node));
    (*new).elem = x;

    return new;
}

void insert(NODE *T, int x)
{
    // Create new node
    NODE newNode = createNode(x);

    if (*T == NULL)
    {
        *T = newNode; // root
    }
    else if ((*newNode).elem < (**T).elem)
    {
        (**T).left = newNode;
    }
    else
    {
        (**T).right = newNode;
    }
}
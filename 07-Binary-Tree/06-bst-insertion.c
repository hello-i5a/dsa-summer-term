#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int elem;
    struct node *left, *right;
} *NODE;

typedef enum
{
    F,
    T
} boolean;

// Operations: Search, Insert, Delete
boolean search(NODE R, int x);
NODE create(int x);
void insert(NODE *R, int x);

// Traversal: Inorder, Preorder, Postorder
void inorder(NODE R);
void preorder(NODE R);
void postorder(NODE R);

int main()
{
    NODE root = NULL;

    insert(&root, 55);
    insert(&root, 23);
    insert(&root, 27);
    insert(&root, 89);
    insert(&root, 14);
    insert(&root, 3);
    insert(&root, 78);
    insert(&root, 95);
    insert(&root, 14);

    printf("Inorder traversal: ");
    inorder(root);

    printf("\nPreorder traversal: ");
    preorder(root);

    printf("\nPostorder traversal: ");
    postorder(root);

    int elem1 = 78;
    int elem2 = 10;

    boolean foundElem1 = search(root, elem1);
    printf("\n\nSearching for %d: ", elem1);
    foundElem1 == T ? printf("Element is found.") : printf("Element NOT found.");

    boolean foundElem2 = search(root, elem2);
    printf("\n\nSearching for %d: ", elem2);
    foundElem2 == T ? printf("Element is found.") : printf("Element NOT found.");

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

void preorder(NODE R)
{
    if (R != NULL)
    {
        printf("%d ", (*R).elem);
        preorder((*R).left);
        preorder((*R).right);
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

boolean search(NODE R, int x)
{
    // Traverse to the left subtree (< case)
    // Traverse to the right subtree (> case)
    // Return T if found, else F
    boolean found = F;

    if (R == NULL)
    { // Base case: empty root or NULL leaf node = NOT found
        found = F;
    }
    else if (x == (*R).elem)
    {
        found = T; // Element found in the current node
    }
    else if (x < (*R).elem)
    {
        found = search((*R).left, x); // Traverse to the left node/subtree
                                      // Update each recursive call if it is found or not on that subtree
    }
    else if (x > (*R).elem)
    {
        found = search((*R).right, x); // Traverse to the right node/subtree
                                       // Update each recursive call if it is found or not on that subtree
    }

    return found;
}

NODE create(int x)
{
    NODE newNode = calloc(1, sizeof(struct node));
    (*newNode).elem = x;

    return newNode;
}

void insert(NODE *R, int x)
{
    // Case 1: Traverse to the left subtree (< case)
    // Case 2: Traverse to the right subtree (> case)
    // Case 3: Handle duplicate element (= case)
    // Case 4: Found a NULL leaf node = create node (Base case)

    if (*R == NULL)
    {
        *R = create(x);
    }
    else if (x < (**R).elem)
    {
        insert(&(**R).left, x); // Traverse to the left node/subtree
    }
    else if (x > (**R).elem)
    {
        insert(&(**R).right, x); // Traverse to the right node/subtree
    }
    else if (x == (**R).elem)
    {
        // Option 1: Do nothing

        // Option 2: Insert to the left or right node/subtree
        // In this case, right node/subtree
        insert(&(**R).right, x);
    }
}
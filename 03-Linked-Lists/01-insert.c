#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure definition
typedef struct node
{
    char name[20];
    struct node *next;
} *LIST;

void display(LIST L);
void insertBeginning(LIST *L, char x[]);

int main()
{
    // Head pointer
    // Method 1:
    // struct node *head = NULL;
    // Method 2:
    LIST head = NULL;

    display(head);

    insertBeginning(&head, "Edmond Yap");
    display(head);

    insertBeginning(&head, "Mikka Zaballe");
    display(head);

    return 0;
}

void display(LIST L)
{
    if (L == NULL)
    {
        printf("Linked list is empty.\n");
    }
    else
    {
        for (; L != NULL; L = (*L).next)
        {
            printf("Name: %s\n", (*L).name);
        }
        printf("\n");
    }
}

void insertBeginning(LIST *L, char x[])
{
    LIST node = (LIST)calloc(1, sizeof(struct node));
    strcpy((*node).name, x);

    if (*L == NULL)
    {
        *L = node;
    }
    else
    {
        LIST temp = *L;
        (*node).next = temp;
        *L = node;
    }
}
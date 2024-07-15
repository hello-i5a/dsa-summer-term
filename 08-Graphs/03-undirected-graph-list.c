#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

// Node = 5
// Edge = 8

typedef struct node
{
    char elem;
    struct node *next;
} *NODE;

typedef struct list
{
    NODE arr[SIZE]; // Array of pointers
    int count;      // Number of nodes
} LIST;

void initialize(LIST *l);
void display(LIST l);
void addNode(LIST *l, char node);
void addEdge(LIST *l, char node1, char node2);

int main()
{
    LIST L;

    initialize(&L);
    display(L);

    addNode(&L, 'A');
    addNode(&L, 'B');
    addNode(&L, 'C');
    addNode(&L, 'D');
    addNode(&L, 'E');
    display(L);

    // 8 edges = 8 function calls
    addEdge(&L, 'A', 'B');
    addEdge(&L, 'A', 'C');
    addEdge(&L, 'A', 'D');
    addEdge(&L, 'B', 'C');
    addEdge(&L, 'B', 'D');
    addEdge(&L, 'B', 'E');
    addEdge(&L, 'C', 'D');
    addEdge(&L, 'D', 'E');
    display(L);

    return 0;
}

void initialize(LIST *l)
{
    (*l).count = -1; // Empty
}

void display(LIST l)
{
    if (l.count == -1)
    {
        printf("List is EMPTY.\n\n");
    }
    else
    {
        int n;
        printf("Nodes\tEdges\n");
        for (n = 0; n <= l.count; n++)
        {
            printf("| %c | ->", l.arr[n]->elem);

            NODE trav = l.arr[n]->next;
            for (; trav != NULL; trav = (*trav).next)
            {
                printf(" [ %c ]->", (*trav).elem);
            }

            printf("\n");
        }
        printf("\n");
    }
}

void addNode(LIST *l, char node)
{
    if ((*l).count < SIZE)
    {
        (*l).count++;
        (*l).arr[(*l).count] = calloc(1, sizeof(struct node));
        (*l).arr[(*l).count]->elem = node;
        (*l).arr[(*l).count]->next = NULL;
    }
    else
    {
        printf("Adding of node is not allowed.\n");
    }
}

void addEdge(LIST *l, char node1, char node2)
{
    int n;
    for (n = 0; n <= (*l).count; n++)
    {
        if ((*l).arr[n]->elem == node1)
        {
            // Create new node
            NODE newNode = calloc(1, sizeof(struct node));
            (*newNode).elem = node2;

            // Connect node2 to node1 by inserting it last
            NODE *trav = &((*l).arr[n]); // Pointer to pointer to node
            for (; *trav != NULL; trav = &(**trav).next)
            {
            }
            *trav = newNode;
        }
    }

    for (n = 0; n <= (*l).count; n++)
    {
        if ((*l).arr[n]->elem == node2)
        {
            // Create new node
            NODE newNode = calloc(1, sizeof(struct node));
            (*newNode).elem = node1;

            // Connect node1 to node2 by inserting it last
            NODE *trav = &((*l).arr[n]); // Pointer to pointer to node
            for (; *trav != NULL; trav = &(**trav).next)
            {
            }
            *trav = newNode;
        }
    }
}
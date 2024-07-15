#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

// Node = 5
// Edge = 8

typedef struct node
{
    char elem;
    struct node *next;
} NODE;

typedef struct list
{
    NODE arr[SIZE];
    int count; // Number of nodes
} LIST;

void initialize(LIST *l);
void display(LIST l);
void addNode(LIST *l, char node);
void addEdge(LIST *l, char edge);

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
            printf("[ %c ] ->\n", l.arr[n].elem);
        }
    }
}

void addNode(LIST *l, char node)
{
    if ((*l).count < SIZE)
    {
        (*l).count++;
        (*l).arr[(*l).count].elem = node;
        (*l).arr[(*l).count].next = NULL;
    }
    else
    {
        printf("Adding of node is not allowed.\n");
    }
}

void addEdge(LIST *l, char edge)
{
}
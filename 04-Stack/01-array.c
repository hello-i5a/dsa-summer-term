#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 5

typedef struct stack
{
    int arr[MAX];
    int top; // Top of the array
} StackArray;

void initialize(StackArray *S);
void display(StackArray S);
bool isFull(StackArray S); // Check if stack is full before pushing
void push(StackArray *S, int x);

int main()
{
    StackArray A;

    initialize(&A);
    display(A);

    push(&A, 10);
    display(A);

    return 0;
}

void initialize(StackArray *S)
{
    (*S).top = -1; // Empty array
}

void display(StackArray S)
{
    if (S.top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        int n;
        for (n = 0; n <= S.top; n++)
        {
            printf("index %d: [ %d ]", n, S.arr[n]);
        }
    }
}

bool isFull(StackArray S)
{
    bool full = false;
    if (S.top == MAX - 1)
    {
        full = true;
    }
    return full;
}

void push(StackArray *S, int x)
{
    if (isFull(*S) == false)
    {
        (*S).top++;
        (*S).arr[(*S).top] = x;
    }
    else
    {
        printf("Stack overflow. Cannot push element.\n");
    }
}
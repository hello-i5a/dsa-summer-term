#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 5 // Maximum size of the circular stack

// Circular stack structure
struct CircularStack
{
    int array[MAX_SIZE];
    int top; // Index of the top element
};

// Function to initialize the circular stack
void init(struct CircularStack *cs)
{
    cs->top = -1; // Initialize top to -1 (empty stack indicator)
}

// Function to check if the circular stack is full
bool isFull(struct CircularStack *cs)
{
    return ((cs->top + 1) % MAX_SIZE == cs->top);
}

// Function to check if the circular stack is empty
bool isEmpty(struct CircularStack *cs)
{
    return (cs->top == -1);
}

// Function to push an element onto the circular stack
void push(struct CircularStack *cs, int element)
{
    if (isFull(cs))
    {
        printf("Stack Overflow: Cannot push element %d\n", element);
        return;
    }
    cs->top = (cs->top + 1) % MAX_SIZE; // Move top to the next circular position
    cs->array[cs->top] = element;       // Insert element at the new top index
    printf("Pushed element: %d\n", element);
}

// Function to pop an element from the circular stack
int pop(struct CircularStack *cs)
{
    if (isEmpty(cs))
    {
        printf("Stack Underflow: Cannot pop element\n");
        return -1;
    }
    int poppedElement = cs->array[cs->top];        // Get the element at the top index
    cs->top = (cs->top - 1 + MAX_SIZE) % MAX_SIZE; // Move top to the previous circular position
    printf("Popped element: %d\n", poppedElement);
    return poppedElement;
}

// Function to print the circular stack
void print(struct CircularStack *cs)
{
    if (isEmpty(cs))
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Circular Stack: ");
    int i = cs->top;
    do
    {
        printf("%d ", cs->array[i]);
        i = (i - 1 + MAX_SIZE) % MAX_SIZE;
    } while (i != cs->top);
    printf("\n");
}

int main()
{
    struct CircularStack cs;
    init(&cs);

    // Push elements onto the circular stack
    push(&cs, 1);
    push(&cs, 2);
    push(&cs, 3);
    push(&cs, 4);
    push(&cs, 5);

    // Print the circular stack
    print(&cs);

    // Pop elements from the circular stack
    pop(&cs);
    pop(&cs);

    // Print the circular stack after popping
    print(&cs);

    // Push more elements to demonstrate circular nature
    push(&cs, 6);
    push(&cs, 7);

    // Print the circular stack again
    print(&cs);

    return 0;
}

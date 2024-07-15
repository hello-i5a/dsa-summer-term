#include <stdio.h>
#define SIZE 5

// Nodes = 5
// Edges = 8

typedef enum
{
    A, // 0
    B, // 1
    C, // 2
    D, // 3
    E  // 4
} index;

void initializeMatrix(int matrix[][SIZE]);
void print(int matrix[][SIZE]);
void addEdge(int matrix[][SIZE], index row, index col);

int main()
{
    int M[SIZE][SIZE];

    initializeMatrix(M);
    print(M);

    // 8 edges = 8 function calls
    addEdge(M, A, B);
    addEdge(M, A, C);
    addEdge(M, A, D);
    addEdge(M, B, C);
    addEdge(M, B, D);
    addEdge(M, B, E);
    addEdge(M, C, D);
    addEdge(M, D, E);
    print(M);

    return 0;
}

void initializeMatrix(int matrix[][SIZE])
{
    int n, m;

    for (n = 0; n < SIZE; n++)
    {
        for (m = 0; m < SIZE; m++)
        {
            matrix[n][m] = 0;
        }
    }
}

void print(int matrix[][SIZE])
{
    int n, m;

    for (n = 0; n < SIZE; n++)
    {
        for (m = 0; m < SIZE; m++)
        {
            printf("%d ", matrix[n][m]);
        }
        printf("\n");
    }
    printf("\n");
}

void addEdge(int matrix[][SIZE], index row, index col)
{
    matrix[row][col] = 1;
    matrix[col][row] = 1;
}
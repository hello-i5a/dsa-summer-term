#include <stdio.h>

int factorial(int n);

int main()
{
    int num;

    printf("Input number: ");
    scanf("%d", &num);
    int x = factorial(num);
    printf("Factorial: %d", x);

    return 0;
}

int factorial(int n)
{
    // Base case
    // To stop the loop
    int f = 0;
    if (n == 1)
    {
        return n;
    }
    else
    {
        f = n * factorial(n - 1);
        return f;
    }
}
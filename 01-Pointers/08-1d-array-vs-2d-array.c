#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int n = 0;
    for (; n < 5; n++)
    {
        printf("Address of index %d: %p\n", n, &arr[n]);
    }
    printf("Address of the first index: %p\n", arr); // Pointer

    printf("\n==========\n\n");

    int multi[2][4];
    printf("Address of multi: %u\n", multi);       // Pointer
    printf("Address of multi[0]: %u\n", multi[0]); // Pointer
    printf("Address of multi[0][0]: %u\n", &multi[0][0]);

    printf("Size of multi: %u\n", sizeof(multi));       // Pointer
    printf("Size of multi[0]: %u\n", sizeof(multi[0])); // Pointer
    printf("Size of multi[0][0]: %u\n", sizeof(multi[0][0]));

    return 0;
}
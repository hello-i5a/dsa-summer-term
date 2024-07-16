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

    int multi[2][4] = {{11, 22, 33, 44}, {66, 77, 88, 99}};
    printf("Address of multi: %p\n", multi);       // Pointer
    printf("Address of multi[0]: %p\n", multi[0]); // Pointer
    printf("Address of multi[0][0]: %p\n", &multi[0][0]);

    printf("Size of multi: %d\n", sizeof(multi));       // Pointer
    printf("Size of multi[0]: %d\n", sizeof(multi[0])); // Pointer
    printf("Size of multi[0][0]: %d\n", sizeof(multi[0][0]));

    printf("\n==========\n\n");
    // Pointer arithmetic
    printf("Address of multi: %ld\n", multi);
    printf("Address of multi+1: %ld\n", (multi + 1));
    printf("Address of multi+2: %ld\n", (multi + 2));
    printf("Address of multi[0]: %ld\n", multi[0]);
    printf("Address of multi[1]: %ld\n", multi[1]);
    printf("Address of multi[2]: %ld\n", multi[2]);

    printf("Value of multi: %d\n", **multi);      // Pointer to an int pointer
                                                  // multi -> multi[0]
    printf("Value of multi[0]: %d\n", *multi[0]); // Pointer to an int
                                                  // multi[0] -> multi[0][0]
    printf("Value of multi[0][0]: %d\n", multi[0][0]);

    return 0;
}
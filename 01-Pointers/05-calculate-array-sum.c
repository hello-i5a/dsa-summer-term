// Calculate Array Sum:
// Write a function that calculates the sum of all elements in an integer array using pointers.
// Function name: calculateArraySum
// Variables: int array[], int size
#include <stdio.h>
#define MAX 5

void displayArray(int arr[], int size);
int calculateArraySum(int arr[], int size);

int main()
{
	int arrInt[MAX] = {11, 22, 33, 44, 55};
	int n = MAX;

	displayArray(arrInt, n);
	int sum = calculateArraySum(arrInt, n);
	printf("Sum of the array: %d", sum);

	return 0;
}

void displayArray(int arr[], int size)
{
	int n;
	for (n = 0; n < size; n++)
	{
		printf("%d ", arr[n]);
	}
	printf("\n");
}

int calculateArraySum(int arr[], int size)
{
	int *start;
	int sum = 0;

	for (start = arr; start <= arr + (size - 1); start++)
	{
		sum = sum + *start;
	}

	return sum;
}

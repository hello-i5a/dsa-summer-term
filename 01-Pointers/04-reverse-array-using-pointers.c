// Reverse Array using Pointers:
// Function Name: reverseArray
// Variables: Integer array and its length (e.g., int arr[], int length)
// Purpose: To reverse the elements of an integer array using pointers.

#include<stdio.h>
#define MAX 5

void displayArray(int arr[], int length);
void reverseArray(int arr[], int length);

int main(){
	int intArray[MAX] = {10, 6, 2, 8, 4};
	int n = MAX;
	
	printf("Before reversing: \n");
	displayArray(intArray, n);
	reverseArray(intArray, n);
	printf("After reversing: \n");
	displayArray(intArray, n);
	
	return 0;
}

void displayArray(int arr[], int length){
	int n;
	
	for(n = 0; n < length; n++){
		printf("%d ", arr[n]);
	}
	printf("\n");
}

void reverseArray(int arr[], int length){
	int *start = arr; // Address of the first index i.e. index 0
	int *end = arr + (length - 1); // Address of the last index i.e. index 4
	int temp;
	
	// Since it is an array, the address is contiguous in the memory so it is increasing
	// Hence the condition `start <= end`
	for(; start <= end; start++, end--){
		temp = *start;
		*start = *end;
		*end = temp;
	}
}

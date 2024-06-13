// Reverse Array using Pointers:
// Function Name: reverseArray
// Variables: Integer array and its length (e.g., int arr[], int length)
// Purpose: To reverse the elements of an integer array using pointers.

#include<stdio.h>
#define MAX 5

void displayArray(int arr[], int length);
void reverseArray(int arr[], int length);

int main(){
	int intArray[MAX] = {2, 4, 6, 8, 10};
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
	int tempArray[MAX];
	int n, i, j;
	
	// Copy the values of arr to tempArray
	for(n = 0; n < length; n++){
		tempArray[n] = arr[n];
	}
	
	for(j = (length-1), i = 0; j >= 0 && i < length; j--, i++){
		arr[j] = tempArray[i];
	}
}

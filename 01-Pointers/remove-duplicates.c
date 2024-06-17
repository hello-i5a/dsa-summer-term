// Remove Duplicates from Array
// Write a function that removes duplicate elements from a sorted integer array using pointers.
// Function name: removeDuplicates
// Variables: int *array, int *size
#include<stdio.h>
#define MAX 7

void displayArr(int arr[], int size);
void removeDuplicates(int arr[], int *size);

int main(){
	int arr[] = {5, 8, 8, 11, 15, 15, 19};
	int n = MAX;
	
	printf("Before removing duplicates: \n");
	displayArr(arr, n);
	removeDuplicates(arr, &n);
	printf("After removing duplicates: \n");
	displayArr(arr, n);
	
	return ;
}

void displayArr(int arr[], int size){
	int n;
	for(n = 0; n < size; n++){
		printf("%d ", arr[n]);
	}
	printf("\n");
}

void removeDuplicates(int arr[], int *size){
	int n, m;
	for(n = 0, m = n+1; n < *size; ){
		if(arr[n] == arr[m]){
			arr[m] = arr[m+1];
			(*size)--;
		}
		n++;
	}
}

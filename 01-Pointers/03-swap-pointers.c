// Swap using Pointers:
// Function Name: swap
// Variables: Two integer pointers (e.g., int *ptr1, *ptr2)
// Purpose: To swap the values of two integers using pointers.
#include<stdio.h>

void swap(int *ptr1, int *ptr2);

int main(){
	int int1 = 10, int2 = 20;
	int *ptrInt1 = &int1;
	int *ptrInt2 = &int2;
	
	printf("Before swapping: \n");
	printf("Integer 1: %d \t Integer 2: %d \n", *ptrInt1, *ptrInt2);
	swap(ptrInt1, ptrInt2);
	printf("After swapping: \n");
	printf("Integer 1: %d \t Integer 2: %d \n", *ptrInt1, *ptrInt2);
	
	return 0;
}

void swap(int *ptr1, int *ptr2){
	int temp;
	
	temp = *ptr1; // Dereferencing ptr1 and assigning the value it holds to temp
	*ptr1 = *ptr2; // Assigning the value dereferenced ptr2 holds to the dereferenced ptr1
	*ptr2 = temp; // Assigning the value of temp to the dereferenced ptr2 
}

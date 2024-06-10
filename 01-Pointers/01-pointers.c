#include<stdio.h>

int main(){
	// Pointers store the memory address of a variable
	// In declaration, `*` denotes that the variable is a pointer
	// In initialization or assignment, `&` denotes the address of
	
	char x = 'a';
	char *y = &x;
	
	printf("Value of x: %c \n", x);
	printf("Address of x: %p \n", &x);
	
	// `*` is a dereference operator on a pointer, it gets the value stored at the memory address the pointer is pointing to
	printf("Value of x using pointer y: %c \n", *y);
	printf("Address of x using pointer y: %p \n", y);
	return 0;
}

#include<stdio.h>

int main(){
	char a = 'Z';
	
	char *b = &a; // Pointer to a char
	char **c = &b; // Double pointer to a char pointer
	char ***d = &c; // Triple pointer to a double pointer
	char ****e = &d; // Quadruple pointer to a triple pointer
	
	printf("Address of a: %p \n", &a);
	printf("Address of pointer b: %p \n", &b);
	printf("Address of double pointer c: %p \n", &c);
	printf("Address of triple pointer d: %p \n", &d);
	printf("Address of quadruple pointer e: %p \n", &e);
	
	printf("---\n");
	
	printf("Value of a: %c \n", a);
	printf("Value of a using pointer b: %c \n", *b);
	printf("Value of a using double pointer c: %c \n", **c);
	printf("Value of a using triple pointer d: %c \n", ***d);
	printf("Value of a using quadruple pointer e: %c \n", ****e);
	
	printf("---\n");
	
	printf("Address of a: %p \n", &a);
	printf("Address of a using pointer b: %p \n", b);
	printf("Address of a using double pointer c: %p \n", *c);
	printf("Address of a using triple pointer d: %p \n", **d);
	printf("Address of a using quadruple pointer e: %p \n", ***e);
	
	return 0;
}

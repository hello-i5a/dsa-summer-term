// Reverse String:
// Write a function that takes a string pointer as an argument and reverses the string it points to.
// Function name: reverseString
// Variables: char *str
#include <stdio.h>

void reverseString(char *str);

int main()
{
	char string[] = "Hi, Joe!"; // Sequence of characters with a null terminator

	printf("%s \n", string);
	reverseString(string);
	printf("%s \n", string);

	return 0;
}

void reverseString(char *str)
{
	// Calculate the length
	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	// Initialize two pointers at the start and end
	char *start = str;
	char *end = str + (len - 1); // Exclude the null terminator
								 // Calculates the pointer to the last character of the string

	// Swap the pointers
	// Strings are essentially array and are stored in contiguous memory hence the for-loop condition
	for (; start < end; start++, end--)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
	}
}
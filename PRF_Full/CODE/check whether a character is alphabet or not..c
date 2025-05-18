// C7: Write a C program to check whether a character is alphabet or not. Hint: using if ((ch >= 'a') && (ch <= 'z')) or if ((ch >= 'A') && (ch <= 'Z'))

#include <stdio.h>

int main() {
	char ch;
	printf("Enter a character: ");
	scanf(" %c", &ch);
	
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
		printf("%c is an alphabet.\n", ch);
	}
	else {
		printf("%c is not an alphabet.\n", ch); 
	} 
	
	return 0;
} 


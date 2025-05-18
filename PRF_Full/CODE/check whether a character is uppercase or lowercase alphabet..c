// Write a C program to check whether a character is uppercase or lowercase alphabet.Character is uppercase alphabet if (ch >= 'A' and ch <= 'Z').Character is lowercase alphabet if(ch >= 'a' and ch <= 'z').

#include <stdio.h>

int main() {
	char ch;
	printf("Enter a character: ");
	scanf(" %c", &ch);
	
	if(ch >= 'A' && ch <= 'Z') {
		printf("%c is uppercase alphabet");
	}
	if(ch >= 'a' && ch <= 'z') {
		printf("%c is lowercase alphabet");
	} 
	
	return 0;
}

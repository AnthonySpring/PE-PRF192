// C3: Write a C program to check whether an alphabet is a vowel or a consonant.

#include <stdio.h>

int main()  {
	char ch;
	printf("Enter a character: ");
	scanf("%c", &ch);
	
	if((ch >= 'a' && ch <= 'z')	|| ( ch >= 'A' && ch <= 'z')) {
		if(ch == 'a' || ch == 'e' || ch == 'o' || ch == 'u' || ch == 'i' || ch == 'A' || ch == 'E' || ch == '0' || ch == 'U' || ch == 'I') {
		printf("%c is a vowel.\n", ch);
	}
	else {
		printf("%c is a consonent.\n", ch);
	}
}
	else {
		printf("%c is not a character.\n", ch);
	}	
	return 0;
	
} 

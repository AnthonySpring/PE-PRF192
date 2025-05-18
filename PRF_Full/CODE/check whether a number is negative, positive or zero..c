// C3: Write a C program to check whether a number is negative, positive or zero.

#include <stdio.h>

int main() {
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	
	if(a > 0) {
		printf("The number is positive.\n");
	}
	if(a < 0) {
		printf("The number is negative.\n");
	}
	if(a = 0) {
		printf("The number is zero.\n");
	}
	
	return 0;
	
}

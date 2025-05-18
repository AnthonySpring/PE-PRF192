// 6: Write a C program to check whether a given number is multiple of 3 or not.

#include <stdio.h>

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if(num % 3 == 0) {
		printf("%d is multiple of 3.\n", num);
	}
	else {
		printf("%d is not multiple of 3.\n", num);
	}
	return 0;
}


// C6: Write a C program to check whether a year is leap year or not. If year is exactly divisible by 4 and not divisible by 100, then it is leap year. Or if year is exactly divisible by 400 then it is leap year.

#include <stdio.h>

int main() {
	int a;
	printf("Enter a number: ");
	scanf("%d, &a");
	
	if((a % 4 == 0 && a % 100 != 0 ) || (a % 400 == 0)) {
		printf("The year is leap.\n");
	}
	else {
		printf("The year is not leap.\n");
	}
	
	return 0;
}

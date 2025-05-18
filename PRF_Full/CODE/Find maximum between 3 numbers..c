// C2: Write a C program to find maximum between three numbers.

#include <stdio.h>

int main() {
	int num1, num2, num3, max;
	
	printf("Enter 3 number: ");
	scanf(" %d %d %d", &num1, &num2, &num3);
	
	if(num1 > num2, num1 > num3) {
		max = num1;
	}
	if(num2 > num1, num2 > num3) {
		max = num2;
	}
	if(num3 > num1, num3 > num2) {
		max = num3;
	}
	
	printf("The maximum number is: %d\n", max);
	
	return 0;

}

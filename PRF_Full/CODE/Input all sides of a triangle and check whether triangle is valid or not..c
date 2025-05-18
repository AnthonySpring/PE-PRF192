// C11: Write a C program to input all sides of a triangle and check whether triangle is valid or not. Hint: a + b > c, b + c > a, a + c > b

#include <stdio.h>

int main() {
	float a, b, c;
	printf("Enter sides of a triangle - a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if(a + b >c && b + c > a && a + c > b) {
		printf("Triangle is valid ");
	}
	else {
		printf("Triangle is not valid");
	}
	return 0;
}

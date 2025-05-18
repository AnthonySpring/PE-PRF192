// C10: Write a C program to input angles of a triangle and check whether triangle is valid or not. Hint: a + b + c = 18

#include <stdio.h>

int main() {
	float a, b, c;
	printf("Enter angles a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if(a + b +c == 180) {
		printf("Triangle is valid.\n");
	}
	else {
		printf
		("Triangle is not valid.\n");
	}
	return 0;
}



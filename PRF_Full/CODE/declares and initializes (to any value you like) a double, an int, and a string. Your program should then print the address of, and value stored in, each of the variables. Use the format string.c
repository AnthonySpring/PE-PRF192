// C1: Write a short C program that declares and initializes (to any value you like) a double, an int, and a string. Your program should then print the address of, and value stored in, each of the variables. Use the format string "%u" to print the addresses as unsigned (32-bit non-negative) integers.

#include <stdio.h>

int main() {
	
    double d = 5.7;
    int i = 73;
    char str[] = "Hello, World!";

    printf("Address of double variable: %u, Value: %f\n", (unsigned int)&d, d);

    printf("Address of int variable: %u, Value: %d\n", (unsigned int)&i, i);

    printf("Address of string variable: %u, Value: %s\n", (unsigned int)str, str);

    return 0;
}
 

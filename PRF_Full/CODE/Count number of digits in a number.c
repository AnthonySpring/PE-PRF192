//Write a C program to count number of digits in a number

#include <stdio.h>

int countDigits(int number);

int main() {
    int number;
    
    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    int digitCount = countDigits(number);
    
    printf("Number of digits in %d: %d\n", number, digitCount);

    return 0;
}

int countDigits(int number) {
    int count = 0;
    
    if (number < 0) {
        number = -number; 
    }
    
    do {
        number /= 10;
        count++;
    } while (number != 0);
    
    return count;
}


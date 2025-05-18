//Calculate sum of digits of a number

#include <stdio.h>

int sumOfDigits(int number);

int main() {
    int number;
    
    // Input the number
    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    // Calculate the sum of digits
    int sum = sumOfDigits(number);
    
    // Display the result
    printf("Sum of digits of %d: %d\n", number, sum);

    return 0;
}

int sumOfDigits(int number) {
    int sum = 0;
    
    // Handle negative numbers
    if (number < 0) {
        number = -number; // make it positive
    }
    
    // Calculate sum of digits using a loop
    while (number > 0) {
        sum += number % 10; // add the last digit to sum
        number /= 10;       // remove the last digit
    }
    
    return sum;
}


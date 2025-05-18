//Enter a number and print its reverse

#include <stdio.h>

int reverseNumber(int number);

int main() {
    int number, reversedNumber;
    
    // Input the number
    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    // Calculate the reversed number
    reversedNumber = reverseNumber(number);
    
    // Display the result
    printf("Reverse of %d is: %d\n", number, reversedNumber);

    return 0;
}

int reverseNumber(int number) {
    int reversedNumber = 0;
    
    // Handle negative numbers
    int isNegative = 0;
    if (number < 0) {
        isNegative = 1;
        number = -number; // make it positive
    }
    
    // Reverse the number using a loop
    while (number > 0) {
        reversedNumber = reversedNumber * 10 + number % 10; // build reversed number
        number /= 10; // remove the last digit
    }
    
    // Handle negative result if the input was negative
    if (isNegative) {
        reversedNumber = -reversedNumber;
    }
    
    return reversedNumber;
}


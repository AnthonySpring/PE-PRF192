//Calculate product of digits of a number

#include <stdio.h>

int productOfDigits(int number);

int main() {
    int number;
    
    // Input the number
    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    // Calculate the product of digits
    int product = productOfDigits(number);
    
    // Display the result
    printf("Product of digits of %d: %d\n", number, product);

    return 0;
}

int productOfDigits(int number) {
    int product = 1; // Initialize product to 1
    
    // Handle negative numbers
    if (number < 0) {
        number = -number; // make it positive
    }
    
    // Calculate product of digits using a loop
    while (number > 0) {
        product *= number % 10; // multiply the last digit to product
        number /= 10;           // remove the last digit
    }
    
    return product;
}


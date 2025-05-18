// Write a C program to perform addition, subtraction, multiplication and division of two numbers. Remember to verify the numbers before performing the operators.

#include <stdio.h>
#include <stdlib.h>

void add(float a, float b);
void subtract(float a, float b);
void multiply(float a, float b);
void divide(float a, float b);
int validateInput(float *a, float *b);

int main() {
    float num1, num2;
    int choice;

    if (!validateInput(&num1, &num2)) {
        printf("Invalid input. Please enter numeric values.\n");
        return 1;
    }

    printf("Enter your choice:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            add(num1, num2);
            break;
        case 2:
            subtract(num1, num2);
            break;
        case 3:
            multiply(num1, num2);
            break;
        case 4:
            divide(num1, num2);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}

void add(float a, float b) {
    printf("Result: %.2f + %.2f = %.2f\n", a, b, a + b);
}

void subtract(float a, float b) {
    printf("Result: %.2f - %.2f = %.2f\n", a, b, a - b);
}

void multiply(float a, float b) {
    printf("Result: %.2f * %.2f = %.2f\n", a, b, a * b);
}

void divide(float a, float b) {
    if (b != 0) {
        printf("Result: %.2f / %.2f = %.2f\n", a, b, a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

int validateInput(float *a, float *b) {
    char input1[20], input2[20];
    
    printf("Enter the first number: ");
    scanf("%s", input1);
    printf("Enter the second number: ");
    scanf("%s", input2);
    
    if (sscanf(input1, "%f", a) != 1 || sscanf(input2, "%f", b) != 1) {
        return 0; 
    }
    return 1;
}


#include <stdio.h>
#include <stdlib.h>

// Function declarations
void add(int a, int b);
void subtract(int a, int b);
void multiply(int a, int b);
void divide(int a, int b);

int main() {
    int num1, num2, choice;

    while (1) {
        // Input numbers
        printf("Enter the first Integer: ");
        if (scanf("%d", &num1) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            exit(1);
        }

        printf("Enter the second Integer: ");
        if (scanf("%d", &num2) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            exit(1);
        }

        // Display menu options
        printf("Here are the options:\n");
        printf("1-Addition\n");
        printf("2-Subtraction\n");
        printf("3-Multiplication\n");
        printf("4-Division\n");
        printf("5-Exit\n");
        printf("Input your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a valid choice.\n");
            exit(1);
        }

        // Perform operations based on user choice
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
            case 5:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
                break;
        }
    }

    return 0;
}

void add(int a, int b) {
    printf("The Addition of %d and %d is: %d\n", a, b, a + b);
}

void subtract(int a, int b) {
    printf("The Subtraction of %d and %d is: %d\n", a, b, a - b);
}

void multiply(int a, int b) {
    printf("The Multiplication of %d and %d is: %d\n", a, b, a * b);
}

void divide(int a, int b) {
    if (b != 0) {
        printf("The Division of %d and %d is: %.2f\n", a, b, (float)a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}


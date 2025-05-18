#include <stdio.h>

// Function to check if a number is a power of 3
int isPowerOfThree(int a) {
    while (a > 1 && a % 3 == 0) {
        a /= 3;
    }
    return a == 1;
}

// Function to find the exponent of a number that makes it a power of 3
int findExponent(int a) {
    int exponent = 0;
    while (a > 1) {
        a /= 3;
        exponent++;
    }
    return exponent;
}

int main() {
    int a;

    // Input the number
    printf("Enter an integer number: ");
    scanf("%d", &a);

    // Check if a is a power of 3
    if (isPowerOfThree(a)) {
        printf("%d is a power of 3 with exponent %d.\n", a, findExponent(a));
    } else {
        printf("%d is not a power of 3.\n", a);
    }

    return 0;
}


#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
	int i;
    if (n <= 1) {
        return 0; // Not prime
    }
    for ( i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

// Function to convert an integer to binary representation
void printBinary(int n) {
    if (n > 1) {
        printBinary(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int n;

    // Input the number
    printf("Enter an integer number: ");
    scanf("%d", &n);

    // Check if n is prime
    if (isPrime(n)) {
        printf("Binary representation of %d: ", n);
        printBinary(n);
        printf("\n");
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}


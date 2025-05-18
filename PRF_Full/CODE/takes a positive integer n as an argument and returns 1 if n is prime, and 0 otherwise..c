// C8: Write a C function that takes a positive integer n as an argument and returns 1 if n is prime, and 0 otherwise. 

#include <stdio.h>

int is_prime(int n);

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (is_prime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

int is_prime(int n) {
    int i;

    if (n <= 1) {
        return 0;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }

    return 1;
}


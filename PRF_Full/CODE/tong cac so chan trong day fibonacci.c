#include <stdio.h>

// Function to calculate the sum of even Fibonacci numbers up to a given limit
long long sumEvenFibonacci(int limit) {
    long long a = 0, b = 1, c;
    long long sum = 0;

    while (b <= limit) {
        c = a + b;
        if (c % 2 == 0) {
            sum += c; // Accumulate the even Fibonacci number
        }
        a = b;
        b = c;
    }

    return sum;
}

int main() {
    int limit;
    printf("Enter the limit to calculate the sum of even Fibonacci numbers: ");
    scanf("%d", &limit);

    long long sum = sumEvenFibonacci(limit);
    printf("The sum of even Fibonacci numbers up to %d is: %lld\n", limit, sum);

    return 0;
}

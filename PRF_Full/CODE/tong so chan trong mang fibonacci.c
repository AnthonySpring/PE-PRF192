#include <stdio.h>

// Function to check if a number is a Fibonacci number
int isFibonacci(int n) {
    int a = 0, b = 1, c;
    if (n == 0 || n == 1)
        return 1; // 0 and 1 are Fibonacci numbers

    while (1) {
        c = a + b;
        if (c == n)
            return 1; // Found the number in the Fibonacci sequence
        else if (c > n)
            return 0; // Number is not in the Fibonacci sequence
        a = b;
        b = c;
    }
}

// Function to calculate the sum of Fibonacci numbers in an array
int sumFibonacciArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (isFibonacci(arr[i])) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 5, 8, 13, 21, 34}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = sumFibonacciArray(arr, size);
    printf("Sum of Fibonacci numbers in the array: %d\n", result);

    return 0;
}

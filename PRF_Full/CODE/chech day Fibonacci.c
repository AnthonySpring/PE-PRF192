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

int main() {
    int num;
    printf("Enter a number to check if it's a Fibonacci number: ");
    scanf("%d", &num);

    if (isFibonacci(num))
        printf("%d is a Fibonacci number.\n", num);
    else
        printf("%d is not a Fibonacci number.\n", num);

    return 0;
}

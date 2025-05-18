// C4: Write a C function that takes two integers as arguments and returns the value of the larger one.

#include <stdio.h>

int max(int a, int b);

int main() {
    int num1, num2, larger;

    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    larger = max(num1, num2);

    printf("The larger of %d and %d is: %d\n", num1, num2, larger);

    return 0;
}

int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}



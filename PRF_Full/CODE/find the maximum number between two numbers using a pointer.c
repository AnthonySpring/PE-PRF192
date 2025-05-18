// C4: Write a program in C to find the maximum number between two numbers using a pointer

#include <stdio.h>

int findMax(int *a, int *b) {
    if (*a > *b) {
        return *a;
    } else {
        return *b;
    }
}

int main() {
    int num1, num2, max;
    int *ptr1, *ptr2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    max = findMax(ptr1, ptr2);

    printf("The maximum number between %d and %d is %d.\n", num1, num2, max);

    return 0;
}
 

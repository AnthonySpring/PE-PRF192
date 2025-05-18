// C5: Write a C function that takes three integers as arguments and returns the value of the largest one.

#include <stdio.h>

int max_of_three(int a, int b, int c);

int main() {
    int num1, num2, num3, largest;

    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    printf("Enter the third integer: ");
    scanf("%d", &num3);

    largest = max_of_three(num1, num2, num3);

    printf("The largest of %d, %d, and %d is: %d\n", num1, num2, num3, largest);

    return 0;
}

int max_of_three(int a, int b, int c) {
    int max = a; 

    if (b > max)
        max = b; 
    if (c > max)
        max = c;  

    return max; 
}
 

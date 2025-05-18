// C10: Write a function that takes a positive integer as input and returns the leading digit in its decimal representation. For example, the leading digit of 234567 is 2.

#include <stdio.h>

int leading_digit(int n);

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    int leading = leading_digit(number);

    printf("The leading digit of %d is: %d\n", number, leading);

    return 0;
}

int leading_digit(int n) {
    while (n >= 10) {
        n /= 10; 
    }
    return n; 
}
 

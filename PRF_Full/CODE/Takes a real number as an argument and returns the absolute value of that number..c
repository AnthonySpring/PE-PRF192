// C6: Write a C function that takes a real number as an argument and returns the absolute value of that number.

#include <stdio.h>

double absolute_value(double num);

int main() {
    double number, abs_value;

    printf("Enter a real number: ");
    scanf("%lf", &number);

    abs_value = absolute_value(number);

    printf("The absolute value of %.2f is: %.2f\n", number, abs_value);

    return 0;
}

double absolute_value(double num) {
    if (num < 0)
        return -num; 
    else
        return num; 
}


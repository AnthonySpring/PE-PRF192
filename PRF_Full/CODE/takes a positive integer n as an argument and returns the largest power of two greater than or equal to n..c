// C7: Write a C function that takes a positive integer n as an argument and returns the largest power of two greater than or equal to n. 

#include <stdio.h>

unsigned int next_power_of_two(unsigned int n);

int main() {
    unsigned int number;
    unsigned int result;

    printf("Enter a positive integer: ");
    scanf("%u", &number);

    result = next_power_of_two(number);

    printf("The largest power of two greater than or equal to %u is: %u\n", number, result);

    return 0;
}

unsigned int next_power_of_two(unsigned int n) {
    if ((n & (n - 1)) == 0) {
        return n;
    }

    unsigned int power = 1;
    while (power < n) {
        power <<= 1; 
    }
    
    return power;
}



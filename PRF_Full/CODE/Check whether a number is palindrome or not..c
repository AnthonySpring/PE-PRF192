//Check whether a number is palindrome or not.

#include <stdio.h>

int isPalindrome(int number);

int main() {
    int number;
    
    // Input the number
    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    // Check if the number is a palindrome
    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}

int isPalindrome(int number) {
    int originalNumber = number;
    int reversedNumber = 0;
    
    // Reverse the number
    while (number > 0) {
        reversedNumber = reversedNumber * 10 + number % 10; // build reversed number
        number /= 10; // remove the last digit
    }
    
    // Check if the original number is equal to its reversed form
    return originalNumber == reversedNumber;
}


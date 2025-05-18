//Write a C program to read 2-digit number, and display in the word.
//For example:
//21
//twenty one

#include <stdio.h>

void printDigit(int digit);
void printTeen(int num);
void printTens(int num);
void printNumber(int num);

int main() {
    int number;

    printf("Enter a 2-digit number: ");
    if (scanf("%d", &number) != 1 || number < 10 || number > 99) {
        printf("Invalid input. Please enter a valid 2-digit number.\n");
        return 1;
    }

    printf("In words: ");
    printNumber(number);
    printf("\n");

    return 0;
}

void printNumber(int num) {
    if (num >= 20) {
        printTens(num / 10);
        if (num % 10 != 0) {
            printf(" ");
            printDigit(num % 10);
        }
    } else if (num >= 10) {
        printTeen(num);
    } else {
        printDigit(num);
    }
}

void printTens(int num) {
    switch (num) {
        case 2:
            printf("twenty");
            break;
        case 3:
            printf("thirty");
            break;
        case 4:
            printf("forty");
            break;
        case 5:
            printf("fifty");
            break;
        case 6:
            printf("sixty");
            break;
        case 7:
            printf("seventy");
            break;
        case 8:
            printf("eighty");
            break;
        case 9:
            printf("ninety");
            break;
        default:
            break;
    }
}

void printTeen(int num) {
    switch (num) {
        case 10:
            printf("ten");
            break;
        case 11:
            printf("eleven");
            break;
        case 12:
            printf("twelve");
            break;
        case 13:
            printf("thirteen");
            break;
        case 14:
            printf("fourteen");
            break;
        case 15:
            printf("fifteen");
            break;
        case 16:
            printf("sixteen");
            break;
        case 17:
            printf("seventeen");
            break;
        case 18:
            printf("eighteen");
            break;
        case 19:
            printf("nineteen");
            break;
        default:
            break;
    }
}

void printDigit(int digit) {
    switch (digit) {
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
        default:
            break;
    }
}


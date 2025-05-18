#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int menu();
int checkHundredNumber(int N);
void printSpeedingFine(double speed);
int sumSeries(int n);
void printTriangle(int n);

int main() {
    //system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:

    int n;
    double speed;
    int sum;
    //scanf("%d", &n);
    
    //int n;
    //scanf("%d", &n);

    //int a, b;
    //scanf("%d%d", &a, &b);

    int userChoice;
    userChoice = menu();

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE

    switch (userChoice)
    {
    case 1:
        scanf("%d", &n);
        if (checkHundredNumber(n) == 1) {
            printf("%d is HUNDRED NUMBER.", n);
        } else {
            printf("%d is not HUNDRED NUMBER.", n);
        }
        break;
    case 2:
        scanf("%lf", &speed);
        printSpeedingFine(speed);
        break;
    case 3:
        scanf("%d", &n);
        sum = sumSeries(n);
        printf("S = %d", sum);
        break;
    case 4:
        scanf("%d", &n);
        printTriangle(n);
        break;

    default:
        break;
    }

    //swap(a, b);
    //printf("\nAfter: a=%d, b=%d", a, b);

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    //system("pause");
    return(0);
}

int menu() {
    int result;
    printf("1 - Check hundred number\n");
    printf("2 - Print speeding fine\n");
    printf("3 - Sum series\n");
    printf("4 - Print triangle\n");
    scanf("%d", &result);
    return result;
}

// check 0, 1
int checkHundredNumber(int N) {
    int result = 0;

    if (N%100 == 0) {
        result = 1;
    }

    return result;
}

void printSpeedingFine(double speed) {
    if (speed > 0 && speed <= 50) {
        printf("0");
    } else if (speed <= 60) {
        printf("1000000");
    } else if (speed <= 70) {
        printf("4000000");
    } else if (speed <= 85) {
        printf("8000000");
    } else {
        printf("12000000");
    }
}

int sumSeries(int n) {
    int result = 0;
    int i;

    for ( i=1; i<=n; i++) {
        result = result + i * 6;
    }

    return result;
}

void printTriangle(int n) {
    int i, j;

    for (i=1; i<=n; i++) { //row
        for (j=1; j<=i; j++) { //col
            if (j==1) {
                printf("*");
            } else {
                printf("_*");
            }
        }
        if (i<n)
            printf("\n");
    }
}

void swap(int A, int B) {
    int temp;
    temp = A;
    A = B;
    B = temp;
    printf("\nIn swap: A=%d, B=%d", A, B);
}

#include <stdio.h>

void operation1() {
    int num1, num2, sum = 0;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    for (int i = num1; i <= num2; i++) {
        sum += i;
    }
    
    printf("Sum of integers between %d and %d is: %d\n", num1, num2, sum);
}

void operation2() {
    char char1, char2;
    
    printf("Enter two characters: ");
    scanf(" %c %c", &char1, &char2);
    
    printf("ASCII table between '%c' and '%c' in ascending order:\n", char1, char2);
    
    for (char c = char1; c <= char2; c++) {
        printf("%c: %d\n", c, c);
    }
}

int main() {
    int choice;
    
    do {
        printf("\nMenu:\n");
        printf("1- Operation 1\n");
        printf("2- Operation 2\n");
        printf("Others- Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                operation1();
                break;
            case 2:
                operation2();
                break;
            default:
                printf("Exiting program.\n");
                return 0;
        }
    } while (1);
    
    return 0;
}


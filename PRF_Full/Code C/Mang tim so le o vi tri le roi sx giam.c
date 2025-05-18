#include <stdio.h>

int main() {
    int i,j,n;
    int numbers[10]; // Array to store input numbers
    int odd_at_odd[10]; // Array to store odd numbers at odd positions

    // Prompt the user to enter the number of integers
    printf("Enter the number of integers (n < 10): ");
    scanf("%d", &n);

    // Check if n is within the specified range
    if (n <= 0 || n >= 10) {
        printf("Please enter a positive integer less than 10 for 'n'.\n");
        return 1; // Return 1 to indicate an error
    }

    // Prompt the user to enter the array of integers
    printf("Enter %d integers:\n", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Print odd numbers at odd positions
    printf("Odd numbers at odd positions:\n");
    int count = 0;
    for ( i = 1; i < n; i += 2) {
        if (numbers[i] % 2 != 0) {
            printf("%d\n", numbers[i]);
            odd_at_odd[count++] = numbers[i];
        }
    }

    // Sort odd numbers at odd positions in descending order
    for ( i = 0; i < count - 1; i++) {
        for ( j = i + 1; j < count; j++) {
            if (odd_at_odd[i] < odd_at_odd[j]) {
                int temp = odd_at_odd[i];
                odd_at_odd[i] = odd_at_odd[j];
                odd_at_odd[j] = temp;
            }
        }
    }

    // Print the sorted odd numbers at odd positions
    printf("\nSorted odd numbers at odd positions:\n");
    for ( i = 0; i < count; i++) {
        printf("%d\n", odd_at_odd[i]);
    }

    return 0;
}


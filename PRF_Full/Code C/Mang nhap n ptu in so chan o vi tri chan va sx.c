#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[], int n) {
	int i,j;
    for ( i = 0; i < n - 1; i++) {
        for ( j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void even_numbers_at_even_positions_first(int arr[], int n) {
    int even_at_even_pos[n]; // Temporary array to store even numbers at even positions
    int even_index = 0; // Index for even_at_even_pos array
    int i;
    // Traverse the array and store even numbers at even positions
    for ( i = 1; i < n; i += 2) {
        if (arr[i] % 2 != 0) {
            even_at_even_pos[even_index] = arr[i];
            even_index++;
        }
    }

    // Sort the original array
    sort(arr, n);

//    // Print even numbers at even positions first
//    for ( i = 0; i < even_index; i++) {
//        printf("%d ", even_at_even_pos[i]);
//    }

    // Print remaining even numbers
    for ( i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Output: ");
    even_numbers_at_even_positions_first(arr, n);

    return 0;
}


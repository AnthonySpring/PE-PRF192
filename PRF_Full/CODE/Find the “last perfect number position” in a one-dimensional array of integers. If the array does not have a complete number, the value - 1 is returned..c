//Find the “last perfect number position” in a one-dimensional array of integers. If the array does not have a complete number, the value - 1 is returned.

#include <stdio.h>

// Function to find the smallest positive number in an array
float findSmallestPositive(float arr[], int size) {
    float smallestPositive = -1; // Initialize smallestPositive to -1 initially
    int i; 

    for (i = 0; i < size; i++) {
        if (arr[i] > 0) { // Check if the element is positive
            if (smallestPositive == -1 || arr[i] < smallestPositive) {
                smallestPositive = arr[i]; // Update smallestPositive if found smaller
            }
        }
    }

    return smallestPositive;
}

int main() {
    int i, size;
    
    // Input the size of the array
    printf("Enter the size of the array: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid input. Size must be a positive integer.\n");
        return 1;
    }

    // Declare an array of given size
    float arr[size];

    // Input elements of the array
    printf("Enter %d real numbers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%f", &arr[i]);
    }

    // Find the smallest positive number
    float result = findSmallestPositive(arr, size);

    // Display the result
    if (result == -1) {
        printf("The array does not contain any positive numbers.\n");
    } else {
        printf("The smallest positive number in the array is: %.2f\n", result);
    }

    return 0;
}


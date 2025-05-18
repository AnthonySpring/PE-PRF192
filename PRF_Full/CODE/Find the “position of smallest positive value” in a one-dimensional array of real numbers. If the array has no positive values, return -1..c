//Find the “position of smallest positive value” in a one-dimensional array of real numbers. If the array has no positive values, return -1.

#include <stdio.h>

// Function to find the index of the smallest positive number in an array
int findIndexSmallestPositive(float arr[], int size) {
    float smallestPositive = -1; // Initialize smallestPositive to -1 initially
    int index = -1;
	int i; // Initialize index to -1 initially

    for (i = 0; i < size; i++) {
        if (arr[i] > 0) { // Check if the element is positive
            if (smallestPositive == -1 || arr[i] < smallestPositive) {
                smallestPositive = arr[i]; // Update smallestPositive
                index = i; // Update index to current position
            }
        }
    }

    return index;
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

    // Find the index of the smallest positive number
    int index = findIndexSmallestPositive(arr, size);

    // Display the result
    if (index == -1) {
        printf("The array does not contain any positive numbers.\n");
    } else {
        printf("The index of the smallest positive number in the array is: %d\n", index);
    }

    return 0;
}


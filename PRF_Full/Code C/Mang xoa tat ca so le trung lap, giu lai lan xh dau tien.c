#include <stdio.h>

#define MAX_SIZE 100 // Maximum size of the array

int main() {
    int arr[MAX_SIZE];
    int uniqueArr[MAX_SIZE];
    int numElements, uniqueNumElements = 0;
    int i,j;
    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &numElements);

    // Input the elements of the array
    printf("Enter the elements of the array: ");
    for ( i = 0; i < numElements; i++) {
        scanf("%d", &arr[i]);
    }

    // Loop through the original array
    for ( i = 0; i < numElements; i++) {
        int isDuplicate = 0;
        // Check if the number is odd and not duplicated
        if (arr[i] % 2 != 0) {
            for ( j = 0; j < uniqueNumElements; j++) {
                if (uniqueArr[j] == arr[i]) {
                    isDuplicate = 1;
                    break;
                }
            }
            // If not a duplicate, add it to the unique array
            if (!isDuplicate) {
                uniqueArr[uniqueNumElements++] = arr[i];
            }
        }
    }

    // Print the resulting array
    printf("Array after removing duplicated odd numbers: ");
    for ( i = 0; i < uniqueNumElements; i++) {
        printf("%d ", uniqueArr[i]);
    }
    printf("\n");

    return 0;
}


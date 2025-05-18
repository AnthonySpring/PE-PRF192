/*Check Ascending Order Create a program that lets users enter an array of n integers 
(where n is specified by the user and n<20). 
The program should then display 1 if the array elements are in ascending order, otherwise 0.*/
#include <stdio.h>

int main() {
    int n;
    int arr[20];
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int isIncreasing = 1;
    for (i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            isIncreasing = 0; 
            break;
        }
    }

    if (isIncreasing) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}

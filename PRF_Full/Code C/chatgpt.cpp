#include <stdio.h>
#include <stdlib.h>

void Max(int n, int *count, int *max) {
    if (n > *max) {
        *max = n;
    }
}

int main() {
    int n, count = 0, max = 0;

    do {
        printf("Enter a number (0 to exit): ");
        scanf("%d", &n);
        
        if (n == 0) {
            break;
        }
        
        Max(n, &count, &max);
        count++;
    } while (1);

    printf("Maximum number entered: %d\n", max);

    return 0;
}


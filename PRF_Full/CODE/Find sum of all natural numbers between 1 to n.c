// C6: 

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of natural numbers from 1 to %d is %d\n", n, sum);

    return 0;
}


#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int sum = 0, temp, digit;
    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, 3);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int n,i;
    scanf("%d", &n);
    printf("Cac so Armstrong tu 0 den %d la: ", n);
    for ( i = 0; i <= n; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}

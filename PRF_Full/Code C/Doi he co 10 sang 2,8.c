#include <stdio.h>

void decimal_to_binary(int n) {
    int binary[32];
    int i = 0,j;
    int f=n;
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("%d in binary number format %d to 2 is: ", f, f);
    for ( j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

void decimal_to_octal(int n) {
    int octal[32];
    int i = 0,j;
    int a;
    while (n > 0) {
        octal[i] = n % 8;
        n = n / 8;
        i++;
    }
    printf("%d in 8 number format %d to 8 is: ", a, a);
    for ( j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    decimal_to_binary(n);
    decimal_to_octal(n);
    return 0;
}



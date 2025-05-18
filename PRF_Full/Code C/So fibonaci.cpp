#include <stdio.h>
void fibonacci(int n) {
    if (n <= 0) {
        printf("So Fibonacci không hop le.\n");
    } else if (n == 1) {
        printf("1\n");
    } else if (n == 2) {
        printf("1\n2\n");
    } else {
        int a = 1, b = 2, t, i;
        printf("Day Fibonacci:\n");
        printf("1\n2\n");
        for (i = 3; i <= n;i++) {
            t = a + b;
            printf("%d\n", t);
            a = b;
            b = t;
        }
    }
}
int main() {
    int n;
    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}

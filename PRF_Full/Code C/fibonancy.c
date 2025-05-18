#include <stdio.h>
//15.	Vi?t chuong tr�nh nh?p v�o s? n nguy�n duong d? t�nh s? Fibonacci Fn bi?t r?ng d�y Fibonacci du?c x�y d?ng theo c�ng th?c:
//F1 = 1
//F2 = 2
//Fn = Fn-1 + Fn-2
void fibonacci(int n) {
    if (n <= 0) {
        printf("So Fibonacci kh�ng hop le.\n");
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

#include <stdio.h>
//15.	Vi?t chuong trình nh?p vào s? n nguyên duong d? tính s? Fibonacci Fn bi?t r?ng dãy Fibonacci du?c xây d?ng theo công th?c:
//F1 = 1
//F2 = 2
//Fn = Fn-1 + Fn-2
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

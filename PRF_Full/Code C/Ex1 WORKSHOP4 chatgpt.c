#include <stdio.h>
#include <math.h>

int main() {
    int a[100], n, i;
    double x, F = 0.0;

    // Nh?p dãy s? nguyên
    printf("Nhap day so nguyen (nhap 0 de dung):\n");
    for (n = 0; ; ++n) {
        scanf("%d", &a[n]);
        if (a[n] == 0) break;
    }

    // Nh?p s? th?c x
    printf("Nhap so thuc x: ");
    scanf("%lf", &x);

    // Tính giá tr? c?a bi?u th?c
    for (i = 0; i < n; ++i) {
        F += a[i] * pow(x, i) * pow(-1, i);
    }

    // In k?t qu?
    printf("So n: %d\n", n);
    printf("Gia tri F: %lf\n", F);

    return 0;
}

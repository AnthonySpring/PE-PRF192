#include<stdio.h>
#include<math.h>

void Cal(int x, int n, int *s, int *s1, float *s2) {
    int i;
    *s = 1, *s1 = 1;
    *s2 = 1.0; // Kh?i t?o s2 v?i giá tr? ki?u float
    for (i = 1; i <= n; i++) {
        *s += pow(x, i);
        *s1 += pow(-x, i);
        *s2 += pow(x, i) / i;
    }
}

int main() {
    int x, n, S, S1;
    float S2; // S2 du?c khai báo ki?u float
    printf("nhap x=");
    scanf("%d", &x);
    printf("\nnhap so mu n=");
    scanf("%d", &n);
    Cal(x, n, &S, &S1, &S2); // Truy?n d?a ch? c?a S2 (ki?u float *) vào hàm Cal
    printf("\nS=%d", S);
    printf("\nS1=%d", S1); // S1 cung du?c in ra du?i d?ng s? nguyên
    printf("\nS2=%f", S2); // S2 du?c in ra du?i d?ng s? th?c
    return 0;
}


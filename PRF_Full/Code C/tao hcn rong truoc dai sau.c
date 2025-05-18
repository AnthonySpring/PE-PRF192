#include <stdio.h>

int main() {
    int n, m,i,j;
    printf("Nhap vao chieu dai n va chieu rong m: ");
    scanf("%d %d", &n, &m); // n l� chi?u d�i v� m l� chi?u r?ng c?a h�nh ch? nh?t

    for ( i = 1; i <= n; i++) {
        for ( j = 1; j <= m; j++) {
            // In ra '*' n?u l� c?nh tr�n, c?nh du?i, c?t d?u ti�n ho?c c?t cu?i c�ng
            if (i == 1 || i == n || j == 1 || j == m) {
                printf("* ");
            } else {
                printf("  "); // In ra kho?ng tr?ng cho ph?n b�n trong c?a h�nh ch? nh?t
            }
        }
        printf("\n"); // Xu?ng d�ng sau m?i h�ng
    }

    return 0;
}


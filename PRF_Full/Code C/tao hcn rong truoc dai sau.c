#include <stdio.h>

int main() {
    int n, m,i,j;
    printf("Nhap vao chieu dai n va chieu rong m: ");
    scanf("%d %d", &n, &m); // n là chi?u dài và m là chi?u r?ng c?a hình ch? nh?t

    for ( i = 1; i <= n; i++) {
        for ( j = 1; j <= m; j++) {
            // In ra '*' n?u là c?nh trên, c?nh du?i, c?t d?u tiên ho?c c?t cu?i cùng
            if (i == 1 || i == n || j == 1 || j == m) {
                printf("* ");
            } else {
                printf("  "); // In ra kho?ng tr?ng cho ph?n bên trong c?a hình ch? nh?t
            }
        }
        printf("\n"); // Xu?ng dòng sau m?i hàng
    }

    return 0;
}


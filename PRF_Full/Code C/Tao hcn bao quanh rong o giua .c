#include <stdio.h>

// Hàm chính d? in ra hình ch? nh?t r?ng
void printRectangle(int n) {
	int i,j;
    // In ra hàng d?u tiên c?a hình ch? nh?t
    for ( i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");

    // In ra các hàng ? gi?a (tr? hàng d?u và hàng cu?i)
    for ( i = 0; i < n - 2; i++) {
        printf("*");
        // In ra các ký t? kho?ng tr?ng ? gi?a
        for ( j = 0; j < n - 2; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    // In ra hàng cu?i cùng c?a hình ch? nh?t
    if (n > 1) {
        for ( i = 0; i < n; i++) {
            printf("*");
        }
        printf("\n");
    }
}

// Hàm main d? nh?p và ch?y chuong trình
int main() {
    int n;
    printf("Nh?p kích thu?c c?a hình ch? nh?t (n): ");
    scanf("%d", &n);

    // G?i hàm d? in ra hình ch? nh?t r?ng
    printRectangle(n);

    return 0;
}


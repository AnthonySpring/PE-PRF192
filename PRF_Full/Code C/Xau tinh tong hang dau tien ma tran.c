#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
    int arr[MAX_ROWS][MAX_COLS];
    int hang, cot;
    int i,j;
    printf("Nh?p s? hàng: ");
    scanf("%d", &hang);
    printf("Nh?p s? c?t: ");
    scanf("%d", &cot);

    // Nh?p giá tr? cho m?ng
    printf("Nh?p các giá tr? c?a m?ng:\n");
    for ( i = 0; i < hang; i++) {
        for ( j = 0; j < cot; j++) {
            printf("Nh?p giá tr? [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Tính t?ng c?a hàng d?u tiên
    int tong = 0;
    for ( j = 0; j < cot; j++) {
        tong += arr[0][j];
    }
    
//    // Tính t?ng c?a c?t d?u tiên (c?t có ch? s? 0)
//    int tong = 0;
//    for (i = 0; i < hang; i++) {
//        tong += arr[i][0];
//    }
    
    
//    // Tính t?ng c?a du?ng chéo
//    int tong = 0;
//    for (int i = 0; i < kichthuoc; i++) {
//        tong += arr[i][i]; // C?ng các ph?n t? n?m trên du?ng chéo chính
//    }

    // In t?ng c?a hàng d?u tiên
    printf("T?ng c?a hàng d?u tiên là: %d\n", tong);

    return 0;
}


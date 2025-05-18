#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
    int arr[MAX_ROWS][MAX_COLS];
    int hang, cot;
    int i,j;
    printf("Nh?p s? h�ng: ");
    scanf("%d", &hang);
    printf("Nh?p s? c?t: ");
    scanf("%d", &cot);

    // Nh?p gi� tr? cho m?ng
    printf("Nh?p c�c gi� tr? c?a m?ng:\n");
    for ( i = 0; i < hang; i++) {
        for ( j = 0; j < cot; j++) {
            printf("Nh?p gi� tr? [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // T�nh t?ng c?a h�ng d?u ti�n
    int tong = 0;
    for ( j = 0; j < cot; j++) {
        tong += arr[0][j];
    }
    
//    // T�nh t?ng c?a c?t d?u ti�n (c?t c� ch? s? 0)
//    int tong = 0;
//    for (i = 0; i < hang; i++) {
//        tong += arr[i][0];
//    }
    
    
//    // T�nh t?ng c?a du?ng ch�o
//    int tong = 0;
//    for (int i = 0; i < kichthuoc; i++) {
//        tong += arr[i][i]; // C?ng c�c ph?n t? n?m tr�n du?ng ch�o ch�nh
//    }

    // In t?ng c?a h�ng d?u ti�n
    printf("T?ng c?a h�ng d?u ti�n l�: %d\n", tong);

    return 0;
}


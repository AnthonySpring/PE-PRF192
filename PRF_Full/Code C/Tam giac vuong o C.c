#include <stdio.h>

// Hàm chính d? in ra tam giác
void printTriangle(int n) {
	int i,j,k;
    // Vòng l?p d? di?u khi?n hàng c?a tam giác
    for ( i = 0; i < n; i++) {
        // In ra kho?ng tr?ng d? t?o ra ph?n l? trái
        for ( j = 0; j < n - i - 1; j++) {
            printf("  "); // S? d?ng hai kho?ng tr?ng d? t?o ra kho?ng tr?ng l?n hon
        }
        // In ra d?u '*' d? t?o ra ph?n tam giác
        for ( k = 0; k <= i; k++) {
            printf("* ");
        }
        printf("\n"); // Xu?ng dòng d? chuy?n sang hàng ti?p theo
    }
}

// Hàm main d? nh?p và ch?y chuong trình
int main() {
    int n;
    printf("Nh?p chi?u cao c?a tam giác: ");
    scanf("%d", &n);

    // G?i hàm d? in ra tam giác
    printTriangle(n);

    return 0;
}
//#include <stdio.h>
//
//// Hàm chính d? in ra tam giác vuông ngu?c
//void printInvertedRightTriangle(int n) {
//	int i,j,k;
//    // Vòng l?p d? di?u khi?n hàng c?a tam giác
//    for ( i = 0; i < n; i++) {
//        // In ra kho?ng tr?ng d? d?ch ph?i các d?u '*' d?n c?nh ph?i
//        for ( j = 0; j < i; j++) {
//            printf("  "); // S? d?ng hai kho?ng tr?ng d? t?o ra kho?ng cách l?n hon
//        }
//        // In ra d?u '*' d? t?o ra ph?n tam giác
//        for ( k = i; k < n; k++) {
//            printf("* ");
//        }
//        printf("\n"); // Xu?ng dòng d? chuy?n sang hàng ti?p theo
//    }
//}
//
//// Hàm main d? nh?p và ch?y chuong trình
//int main() {
//    int n;
//    printf("Nh?p chi?u cao c?a tam giác: ");
//    scanf("%d", &n);
//
//    // G?i hàm d? in ra tam giác vuông ngu?c
//    printInvertedRightTriangle(n);
//
//    return 0;
//}
//


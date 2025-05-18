#include <stdio.h>

// H�m ch�nh d? in ra tam gi�c
void printTriangle(int n) {
	int i,j,k;
    // V�ng l?p d? di?u khi?n h�ng c?a tam gi�c
    for ( i = 0; i < n; i++) {
        // In ra kho?ng tr?ng d? t?o ra ph?n l? tr�i
        for ( j = 0; j < n - i - 1; j++) {
            printf("  "); // S? d?ng hai kho?ng tr?ng d? t?o ra kho?ng tr?ng l?n hon
        }
        // In ra d?u '*' d? t?o ra ph?n tam gi�c
        for ( k = 0; k <= i; k++) {
            printf("* ");
        }
        printf("\n"); // Xu?ng d�ng d? chuy?n sang h�ng ti?p theo
    }
}

// H�m main d? nh?p v� ch?y chuong tr�nh
int main() {
    int n;
    printf("Nh?p chi?u cao c?a tam gi�c: ");
    scanf("%d", &n);

    // G?i h�m d? in ra tam gi�c
    printTriangle(n);

    return 0;
}
//#include <stdio.h>
//
//// H�m ch�nh d? in ra tam gi�c vu�ng ngu?c
//void printInvertedRightTriangle(int n) {
//	int i,j,k;
//    // V�ng l?p d? di?u khi?n h�ng c?a tam gi�c
//    for ( i = 0; i < n; i++) {
//        // In ra kho?ng tr?ng d? d?ch ph?i c�c d?u '*' d?n c?nh ph?i
//        for ( j = 0; j < i; j++) {
//            printf("  "); // S? d?ng hai kho?ng tr?ng d? t?o ra kho?ng c�ch l?n hon
//        }
//        // In ra d?u '*' d? t?o ra ph?n tam gi�c
//        for ( k = i; k < n; k++) {
//            printf("* ");
//        }
//        printf("\n"); // Xu?ng d�ng d? chuy?n sang h�ng ti?p theo
//    }
//}
//
//// H�m main d? nh?p v� ch?y chuong tr�nh
//int main() {
//    int n;
//    printf("Nh?p chi?u cao c?a tam gi�c: ");
//    scanf("%d", &n);
//
//    // G?i h�m d? in ra tam gi�c vu�ng ngu?c
//    printInvertedRightTriangle(n);
//
//    return 0;
//}
//


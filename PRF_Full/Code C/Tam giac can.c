//#include <stdio.h>
//
//// H�m ch�nh d? in ra tam gi�c
//void printTriangle(int n) {
//	int i, j ,k; 
//    // V�ng l?p d? di?u khi?n h�ng c?a tam gi�c
//    for ( i = 0; i < n; i++) {
//        // In ra kho?ng tr?ng d? can ph?i c�c d?u '*' tuong ?ng
//        for ( j = 0; j < n - i - 1; j++) {
//            printf("  "); // S? d?ng hai kho?ng tr?ng d? t?o ra kho?ng c�ch l?n hon
//        }
//        // In ra d?u '*' d? t?o ra ph?n tam gi�c
//        for ( k = 0; k < 2 * i + 1; k++) {
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
//    // G?i h�m d? in ra tam gi�c
//    printTriangle(n);
//
//    return 0;
//}

#include <stdio.h>//tam giac can nguoc
int main()
{
    int n, i, j, k;
    printf("Nh?p s? h�ng c?a tam gi�c: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        // In ra c�c kho?ng tr?ng tru?c m?i h�ng
        for (j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        // In ra c�c d?u * trong m?i h�ng
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("* ");
        }
        // Xu?ng h�ng m?i
        printf("\n");
    }
    return 0;
}



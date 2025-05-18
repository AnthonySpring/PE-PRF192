//#include <stdio.h>
//
//// Hàm chính d? in ra tam giác
//void printTriangle(int n) {
//	int i, j ,k; 
//    // Vòng l?p d? di?u khi?n hàng c?a tam giác
//    for ( i = 0; i < n; i++) {
//        // In ra kho?ng tr?ng d? can ph?i các d?u '*' tuong ?ng
//        for ( j = 0; j < n - i - 1; j++) {
//            printf("  "); // S? d?ng hai kho?ng tr?ng d? t?o ra kho?ng cách l?n hon
//        }
//        // In ra d?u '*' d? t?o ra ph?n tam giác
//        for ( k = 0; k < 2 * i + 1; k++) {
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
//    // G?i hàm d? in ra tam giác
//    printTriangle(n);
//
//    return 0;
//}

#include <stdio.h>//tam giac can nguoc
int main()
{
    int n, i, j, k;
    printf("Nh?p s? hàng c?a tam giác: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        // In ra các kho?ng tr?ng tru?c m?i hàng
        for (j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        // In ra các d?u * trong m?i hàng
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("* ");
        }
        // Xu?ng hàng m?i
        printf("\n");
    }
    return 0;
}



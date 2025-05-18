#include <stdio.h>

// H�m ch�nh d? in ra h�nh ch? nh?t r?ng
void printRectangle(int n) {
	int i,j;
    // In ra h�ng d?u ti�n c?a h�nh ch? nh?t
    for ( i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");

    // In ra c�c h�ng ? gi?a (tr? h�ng d?u v� h�ng cu?i)
    for ( i = 0; i < n - 2; i++) {
        printf("*");
        // In ra c�c k� t? kho?ng tr?ng ? gi?a
        for ( j = 0; j < n - 2; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    // In ra h�ng cu?i c�ng c?a h�nh ch? nh?t
    if (n > 1) {
        for ( i = 0; i < n; i++) {
            printf("*");
        }
        printf("\n");
    }
}

// H�m main d? nh?p v� ch?y chuong tr�nh
int main() {
    int n;
    printf("Nh?p k�ch thu?c c?a h�nh ch? nh?t (n): ");
    scanf("%d", &n);

    // G?i h�m d? in ra h�nh ch? nh?t r?ng
    printRectangle(n);

    return 0;
}


#include <stdio.h>
#include <string.h>

void selectionSort(char danhSach[][50], int n) {
    int i, j, min_idx;
    char temp[50];

    // Duy?t qua t?ng ph?n t? trong m?ng
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        
        // Tìm ph?n t? nh? nh?t trong m?ng chua du?c s?p x?p
        for (j = i + 1; j < n; j++) {
            if (strcmp(danhSach[j], danhSach[min_idx]) < 0) {
                min_idx = j;
            }
        }
        
        // Hoán d?i ph?n t? nh? nh?t v?i ph?n t? d?u tiên c?a m?ng chua du?c s?p x?p
        strcpy(temp, danhSach[min_idx]);
        strcpy(danhSach[min_idx], danhSach[i]);
        strcpy(danhSach[i], temp);
    }
}

int main() {
    char danhSach[100][50]; // M?ng ch?a 100 ph?n t?, m?i ph?n t? có kích thu?c 50
    int i, n;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    getchar(); // Ð?c ký t? newline

    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        fgets(danhSach[i], sizeof(danhSach[i]), stdin);
        danhSach[i][strcspn(danhSach[i], "\n")] = '\0'; // Lo?i b? ký t? newline
    }

    // S?p x?p m?ng danhSach
    selectionSort(danhSach, n);

    // In ra m?ng dã s?p x?p
    printf("\nDanh sach sau khi sap xep:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: %s\n", i + 1, danhSach[i]);
    }

    return 0;
}


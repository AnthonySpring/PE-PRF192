#include <stdio.h>

// H�m ki?m tra m?ng c� du?c s?p x?p d?ng d?n d?u kh�ng
int isSortedAlternating(int arr[], int size) {
	int i;
    // Ki?m tra n?u m?ng c� �t hon hai ph?n t? th� n� du?c coi l� du?c s?p x?p d?ng d?n d?u
    if (size <= 1) {
        return 1;
    }

    int increasing = arr[1] > arr[0]; // X�c d?nh xem d�y dang tang hay gi?m
    for ( i = 2; i < size; i++) {
        if ((arr[i] > arr[i - 1]) == increasing) {
            // N?u ph?n t? ti?p theo kh�ng ph� h?p v?i hu?ng tang/gi?m c?a d�y
            return 0;
        }
    }
    return 1;
}

int main() {
    int arr1[] = {1, 3, 2, 4, 6}; // M?ng kh�ng du?c s?p x?p d?ng d?n d?u
    int arr2[] = {10, 8, 9, 6, 4}; // M?ng du?c s?p x?p d?ng d?n d?u (gi?m d?n, tang d?n)
    int arr3[] = {1, 3, 2, 5, 4}; // M?ng kh�ng du?c s?p x?p d?ng d?n d?u

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    if (isSortedAlternating(arr1, size1)) {
        printf("Mang 1 duoc sap xep dang dan dau.\n");
    } else {
        printf("Mang 1 khong duoc sap xep dang dan dau.\n");
    }

    if (isSortedAlternating(arr2, size2)) {
        printf("Mang 2 duoc sap xep dang dan dau.\n");
    } else {
        printf("Mang 2 khong duoc sap xep dang dan dau.\n");
    }

    if (isSortedAlternating(arr3, size3)) {
        printf("Mang 3 duoc sap xep dang dan dau.\n");
    } else {
        printf("Mang 3 khong duoc sap xep dang dan dau.\n");
    }

    return 0;
}


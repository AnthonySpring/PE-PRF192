#include <stdio.h>

// Hàm ki?m tra s? nguyên t?
int isPrime(int n) {
	int i;
    if (n <= 1) return 0; // S? 1 và s? âm không ph?i là s? nguyên t?
    for ( i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; // N?u n chia h?t cho s? nào dó khác 1 và chính nó thì không ph?i là s? nguyên t?
    }
    return 1; // N?u không có s? nào chia h?t cho n thì n là s? nguyên t?
}

// Hàm tìm giá tr? l?n nh?t và nh? nh?t trong m?ng
void findMinMax(int arr[], int size) {
	int i;
    if (size == 0) {
        printf("Mang rong.\n");
        return;
    }
    int min = arr[0];
    int max = arr[0];
    for (i = 1; i < size; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    printf("Gia tri nho nhat: %d\n", min);
    printf("Gia tri lon nhat: %d\n", max);
}

// Hàm ki?m tra m?ng có du?c s?p x?p tang d?n hay không
int isSortedAscending(int arr[], int size) {
	int i;
    for ( i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) return 0;
    }
    return 1;
}

// Hàm ki?m tra m?ng có ch?a s? nguyên t? hay không
int containsPrime(int arr[], int size) {
	int i;
    for ( i = 0; i < size; i++) {
        if (isPrime(arr[i])) return 1;
    }
    return 0;
}

// Hàm ki?m tra m?ng có du?c s?p x?p tang d?n hay không
int isSortedDescending(int arr[], int size) {
	int i;
    for (i = 1; i < size; i++) {
        if (arr[i] > arr[i - 1]) return 0;
    }
    return 1;
}

int main() {
    int arr[] = {3, 7, 2, 11, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
  	int i;
    // Ki?m tra s? nguyên t?
    printf("Cac so nguyen to trong mang:\n");
    for (i = 0; i < size; i++) {
        if (isPrime(arr[i])) printf("%d ", arr[i]);
    }
    printf("\n");

    // Tìm giá tr? l?n nh?t và nh? nh?t
    findMinMax(arr, size);

    // Ki?m tra m?ng có du?c s?p x?p tang d?n hay không
    if (isSortedAscending(arr, size)) {
        printf("Mang duoc sap xep tang dan.\n");
    } else {
        printf("Mang khong duoc sap xep tang dan.\n");
    }

    // Ki?m tra m?ng có ch?a s? nguyên t? hay không
    if (containsPrime(arr, size)) {
        printf("Mang chua it nhat mot so nguyen to.\n");
    } else {
        printf("Mang khong chua so nguyen to nao.\n");
    }

    // Ki?m tra m?ng có du?c s?p x?p gi?m d?n hay không
    if (isSortedDescending(arr, size)) {
        printf("Mang duoc sap xep giam dan.\n");
    } else {
        printf("Mang khong duoc sap xep giam dan.\n");
    }

    return 0;
}


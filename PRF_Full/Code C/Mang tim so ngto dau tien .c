#include <stdio.h>

// Hàm ki?m tra s? nguyên t?
int isPrime(int n) {
	int i;
    if (n <= 1) {
        return 0; // Không ph?i s? nguyên t?
    }
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Không ph?i s? nguyên t?
        }
    }
    return 1; // Là s? nguyên t?
}

int main() {
    int arr[] = {4, 6, 7, 9, 10, 11}; // M?ng các s? nguyên
    int n = sizeof(arr) / sizeof(arr[0]);
    int firstPrime = -1; // Kh?i t?o giá tr? -1, n?u không tìm th?y s? nguyên t?
    int i;
    // Duy?t qua m?ng d? tìm s? nguyên t? d?u tiên
    for ( i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            firstPrime = arr[i];
            break;
        }
    }

    // In k?t qu?
    if (firstPrime != -1) {
        printf("S? nguyên t? d?u tiên trong m?ng là: %d\n", firstPrime);
    } else {
        printf("M?ng không có s? nguyên t?.\n");
    }

    return 0;
}


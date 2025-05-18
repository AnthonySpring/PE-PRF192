#include <stdio.h>

// H�m ki?m tra s? nguy�n t?
int isPrime(int n) {
	int i;
    if (n <= 1) {
        return 0; // Kh�ng ph?i s? nguy�n t?
    }
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Kh�ng ph?i s? nguy�n t?
        }
    }
    return 1; // L� s? nguy�n t?
}

int main() {
    int arr[] = {4, 6, 7, 9, 10, 11}; // M?ng c�c s? nguy�n
    int n = sizeof(arr) / sizeof(arr[0]);
    int firstPrime = -1; // Kh?i t?o gi� tr? -1, n?u kh�ng t�m th?y s? nguy�n t?
    int i;
    // Duy?t qua m?ng d? t�m s? nguy�n t? d?u ti�n
    for ( i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            firstPrime = arr[i];
            break;
        }
    }

    // In k?t qu?
    if (firstPrime != -1) {
        printf("S? nguy�n t? d?u ti�n trong m?ng l�: %d\n", firstPrime);
    } else {
        printf("M?ng kh�ng c� s? nguy�n t?.\n");
    }

    return 0;
}


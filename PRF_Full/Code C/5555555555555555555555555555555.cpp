#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Kh�ng ph?i s? nguy�n t?
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // Kh�ng ph?i s? nguy�n t?
        }
    }
    return 1; // L� s? nguy�n t?
}

int countPrimeDigits(int n) {
    int count = 0;
    int temp = abs(n); // Chuy?n d?i n?u n l� s? �m
    int visited[10] = {0}; // M?ng d? d�nh d?u c�c ch? s? d� ki?m tra
    while (temp != 0) {
        int digit = temp % 10;
        if (!visited[digit] && isPrime(digit)) {
            count++;
            visited[digit] = 1; // ��nh d?u ch? s? d� du?c ki?m tra
        }
        temp /= 10;
    }
    return count;
}

int main() {
    int n;
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);
    printf("So luong chu so nguyen to trong %d la: %d\n", n, countPrimeDigits(n));
    return 0;
}


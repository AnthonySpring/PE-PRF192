#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Không ph?i s? nguyên t?
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // Không ph?i s? nguyên t?
        }
    }
    return 1; // Là s? nguyên t?
}

int countPrimeDigits(int n) {
    int count = 0;
    int temp = abs(n); // Chuy?n d?i n?u n là s? âm
    int visited[10] = {0}; // M?ng d? dánh d?u các ch? s? dã ki?m tra
    while (temp != 0) {
        int digit = temp % 10;
        if (!visited[digit] && isPrime(digit)) {
            count++;
            visited[digit] = 1; // Ðánh d?u ch? s? dã du?c ki?m tra
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


#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Không ph?i s? nguyên t?
    }
    int i;
    for ( i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // Không ph?i s? nguyên t?
        }
    }
    return 1; // Là s? nguyên t?
}

int countPrimeDigits(int n) {
    int count = 0;
    while (n != 0) {
        int digit = n % 10;
        if (isPrime(digit)) {
            count++;
        }
        n /= 10;
    }
    return count;
}

int main() {
    int n;
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);
    printf("So luong chu so nguyen to trong %d la: %d\n", n, countPrimeDigits(n));
    printf("cac so ngto la %d",n);
	return 0;
}


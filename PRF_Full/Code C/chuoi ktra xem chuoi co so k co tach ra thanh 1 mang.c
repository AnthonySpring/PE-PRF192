#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Hàm ki?m tra xem m?t kí t? có ph?i là s? hay không
int is_digit(char c) {
    return c >= '0' && c <= '9';
}

// Hàm tách m?t chu?i thành m?t m?ng s?
int* split_digits(char* str, int* size) {
	int i;
    // Kh?i t?o m?t m?ng d?ng d? luu tr? các s?
    int* digits = (int*)malloc(sizeof(int) * strlen(str));
    // Kh?i t?o bi?n d?m s? lu?ng s?
    int count = 0;
    // Duy?t qua t?ng kí t? trong chu?i
    for (i = 0; i < strlen(str); i++) {
        // N?u kí t? là s?
        if (is_digit(str[i])) {
            // Chuy?n kí t? thành s? và thêm vào m?ng
            digits[count] = str[i] - '0';
            // Tang bi?n d?m
            count++;
        }
    }
    // Tr? v? kích thu?c c?a m?ng s?
    *size = count;
    // Tr? v? m?ng s?
    return digits;
}

int main() {
    // Khai báo m?t chu?i
    char str[100];
    int i;
    // Nh?p chu?i t? bàn phím
    printf("Nh?p m?t chu?i: ");
    scanf("%s", str);
    // Khai báo bi?n luu kích thu?c c?a m?ng s?
    int size;
    // G?i hàm tách m?t chu?i thành m?t m?ng s?
    int* digits = split_digits(str, &size);
    // In ra m?ng s?
    printf("M?ng s? tách t? chu?i là: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", digits[i]);
    }
    printf("\n");
    // Gi?i phóng b? nh? dã c?p phát cho m?ng s?
    free(digits);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// H�m ki?m tra xem m?t k� t? c� ph?i l� s? hay kh�ng
int is_digit(char c) {
    return c >= '0' && c <= '9';
}

// H�m t�ch m?t chu?i th�nh m?t m?ng s?
int* split_digits(char* str, int* size) {
	int i;
    // Kh?i t?o m?t m?ng d?ng d? luu tr? c�c s?
    int* digits = (int*)malloc(sizeof(int) * strlen(str));
    // Kh?i t?o bi?n d?m s? lu?ng s?
    int count = 0;
    // Duy?t qua t?ng k� t? trong chu?i
    for (i = 0; i < strlen(str); i++) {
        // N?u k� t? l� s?
        if (is_digit(str[i])) {
            // Chuy?n k� t? th�nh s? v� th�m v�o m?ng
            digits[count] = str[i] - '0';
            // Tang bi?n d?m
            count++;
        }
    }
    // Tr? v? k�ch thu?c c?a m?ng s?
    *size = count;
    // Tr? v? m?ng s?
    return digits;
}

int main() {
    // Khai b�o m?t chu?i
    char str[100];
    int i;
    // Nh?p chu?i t? b�n ph�m
    printf("Nh?p m?t chu?i: ");
    scanf("%s", str);
    // Khai b�o bi?n luu k�ch thu?c c?a m?ng s?
    int size;
    // G?i h�m t�ch m?t chu?i th�nh m?t m?ng s?
    int* digits = split_digits(str, &size);
    // In ra m?ng s?
    printf("M?ng s? t�ch t? chu?i l�: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", digits[i]);
    }
    printf("\n");
    // Gi?i ph�ng b? nh? d� c?p ph�t cho m?ng s?
    free(digits);
    return 0;
}


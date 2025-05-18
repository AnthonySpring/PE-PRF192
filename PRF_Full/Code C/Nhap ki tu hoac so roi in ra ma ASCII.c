#include <stdio.h>

int main() {
    char character;
    int ascii_code;

    // Nh?p m?t k� t? t? ngu?i d�ng
    printf("Nhap mot ky tu: ");
    scanf("%c", &character);

    // In ra m� ASCII tuong ?ng v?i k� t? d� nh?p
    printf("Ma ASCII cua ky tu '%c' l� %d.\n", character, character);

    // Nh?p m?t s? nguy�n t? ngu?i d�ng
    printf("Nhap mot so nguy�n tu 1 den 255: ");
    scanf("%d", &ascii_code);

    // Ki?m tra xem s? nguy�n c� n?m trong kho?ng t? 1 d?n 255 hay kh�ng
    if (ascii_code >= 1 && ascii_code <= 255) {
        // In ra k� t? c� m� ASCII tuong ?ng
        printf("Ky tu c� m� ASCII %d l� '%c'\n", ascii_code, ascii_code);
    } else {
        printf("So nguy�n ban nhap kh�ng hop le.\n");
    }

    return 0;
}


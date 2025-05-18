#include <stdio.h>

int main() {
    char character;
    int ascii_code;

    // Nh?p m?t ký t? t? ngu?i dùng
    printf("Nhap mot ky tu: ");
    scanf("%c", &character);

    // In ra mã ASCII tuong ?ng v?i ký t? dã nh?p
    printf("Ma ASCII cua ky tu '%c' là %d.\n", character, character);

    // Nh?p m?t s? nguyên t? ngu?i dùng
    printf("Nhap mot so nguyên tu 1 den 255: ");
    scanf("%d", &ascii_code);

    // Ki?m tra xem s? nguyên có n?m trong kho?ng t? 1 d?n 255 hay không
    if (ascii_code >= 1 && ascii_code <= 255) {
        // In ra ký t? có mã ASCII tuong ?ng
        printf("Ky tu có mã ASCII %d là '%c'\n", ascii_code, ascii_code);
    } else {
        printf("So nguyên ban nhap không hop le.\n");
    }

    return 0;
}


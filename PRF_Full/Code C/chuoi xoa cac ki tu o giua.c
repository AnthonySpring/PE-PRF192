#include <stdio.h>
#include <string.h>

void xoaKyTuGiua(char *chuoi) {
    int i, j, len;
    len = strlen(chuoi);

    for (i = 1; i < len - 1; i++) {
        for (j = i; j < len - 1; j++) {
            chuoi[j] = chuoi[j + 1];
        }
        len--;
        i--;
    }
    chuoi[len] = '\0'; // K?t th�c chu?i
}

int main() {
    char chuoi[100];

    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = 0; // X�a k� t? xu?ng d�ng th?a

    xoaKyTuGiua(chuoi);

    printf("Chuoi sau khi xoa: %s\n", chuoi);

    return 0;
}


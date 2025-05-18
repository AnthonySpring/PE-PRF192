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
    chuoi[len] = '\0'; // K?t thúc chu?i
}

int main() {
    char chuoi[100];

    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = 0; // Xóa ký t? xu?ng dòng th?a

    xoaKyTuGiua(chuoi);

    printf("Chuoi sau khi xoa: %s\n", chuoi);

    return 0;
}


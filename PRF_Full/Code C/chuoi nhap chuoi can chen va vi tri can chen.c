#include <stdio.h>
#include <string.h>

void chen_chuoi(char *chuoi, char *chuoi_chen, int vi_tri) {
    int len_chuoi = strlen(chuoi);
    int len_chuoi_chen = strlen(chuoi_chen);
    int i, j;

    // Di chuy?n t?t c? các ký t? sau v? trí chèn d? t?o không gian cho chu?i chèn
    for (i = len_chuoi; i >= vi_tri; i--) {
        chuoi[i + len_chuoi_chen] = chuoi[i];
    }

    // Chèn chu?i chèn vào v? trí dã ch? d?nh
    for (i = vi_tri, j = 0; j < len_chuoi_chen; i+=2, j++) {
        chuoi[i] = chuoi_chen[j];
    }
}

int main() {
    char chuoi[1000];
    char chuoi_chen[100];
    int vi_tri;

    printf("Nh?p chu?i: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0'; // Lo?i b? ký t? xu?ng dòng n?u có

    printf("Nh?p chu?i c?n chèn: ");
    fgets(chuoi_chen, sizeof(chuoi_chen), stdin);
    chuoi_chen[strcspn(chuoi_chen, "\n")] = '\0'; // Lo?i b? ký t? xu?ng dòng n?u có

    printf("Nh?p v? trí c?n chèn: ");
    scanf("%d", &vi_tri);

    chen_chuoi(chuoi, chuoi_chen, vi_tri);

    printf("Chu?i sau khi chèn: %s\n", chuoi);

    return 0;
}


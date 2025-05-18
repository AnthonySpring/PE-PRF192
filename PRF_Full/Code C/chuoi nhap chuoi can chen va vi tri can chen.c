#include <stdio.h>
#include <string.h>

void chen_chuoi(char *chuoi, char *chuoi_chen, int vi_tri) {
    int len_chuoi = strlen(chuoi);
    int len_chuoi_chen = strlen(chuoi_chen);
    int i, j;

    // Di chuy?n t?t c? c�c k� t? sau v? tr� ch�n d? t?o kh�ng gian cho chu?i ch�n
    for (i = len_chuoi; i >= vi_tri; i--) {
        chuoi[i + len_chuoi_chen] = chuoi[i];
    }

    // Ch�n chu?i ch�n v�o v? tr� d� ch? d?nh
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
    chuoi[strcspn(chuoi, "\n")] = '\0'; // Lo?i b? k� t? xu?ng d�ng n?u c�

    printf("Nh?p chu?i c?n ch�n: ");
    fgets(chuoi_chen, sizeof(chuoi_chen), stdin);
    chuoi_chen[strcspn(chuoi_chen, "\n")] = '\0'; // Lo?i b? k� t? xu?ng d�ng n?u c�

    printf("Nh?p v? tr� c?n ch�n: ");
    scanf("%d", &vi_tri);

    chen_chuoi(chuoi, chuoi_chen, vi_tri);

    printf("Chu?i sau khi ch�n: %s\n", chuoi);

    return 0;
}


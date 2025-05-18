#include <stdio.h>
#include <string.h>

void nhap_xau(char *chuoi_goc, char *xau_nhap, int vi_tri) {
    // T?o m?t m?ng t?m th?i d? luu chu?i m?i
    char chuoi_moi[1000]; // Gi? s? chu?i c� d? d�i t?i da l� 1000 k� t?

    // Sao ch�p c�c k� t? t? chu?i g?c d?n v? tr� c?n nh?p v�o chu?i m?i
    strncpy(chuoi_moi, chuoi_goc, vi_tri);
    chuoi_moi[vi_tri] = '\0'; // K?t th�c chu?i m?i

    // N?i chu?i nh?p v�o chu?i m?i
    strcat(chuoi_moi, xau_nhap);

    // N?i ph?n c�n l?i c?a chu?i g?c v�o chu?i m?i
    strcat(chuoi_moi, chuoi_goc + vi_tri);

    // Sao ch�p chu?i m?i v�o chu?i g?c
    strcpy(chuoi_goc, chuoi_moi);
}

int main() {
    char chuoi_goc[1000] = "Chuoi ban dau";
    char xau_nhap[] = " xau nhap ";
    int vi_tri_nhap = 7;

    nhap_xau(chuoi_goc, xau_nhap, vi_tri_nhap);
    printf("%s\n", chuoi_goc);

    return 0;
}


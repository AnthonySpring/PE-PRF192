#include <stdio.h>
#include <string.h>

void nhap_xau(char *chuoi_goc, char *xau_nhap, int vi_tri) {
    // T?o m?t m?ng t?m th?i d? luu chu?i m?i
    char chuoi_moi[1000]; // Gi? s? chu?i có d? dài t?i da là 1000 ký t?

    // Sao chép các ký t? t? chu?i g?c d?n v? trí c?n nh?p vào chu?i m?i
    strncpy(chuoi_moi, chuoi_goc, vi_tri);
    chuoi_moi[vi_tri] = '\0'; // K?t thúc chu?i m?i

    // N?i chu?i nh?p vào chu?i m?i
    strcat(chuoi_moi, xau_nhap);

    // N?i ph?n còn l?i c?a chu?i g?c vào chu?i m?i
    strcat(chuoi_moi, chuoi_goc + vi_tri);

    // Sao chép chu?i m?i vào chu?i g?c
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


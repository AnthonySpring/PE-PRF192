#include <stdio.h>
#include <string.h>

void xoaCacKyTuKhac(char *chuoi, const char *giuLai) {
    int i, j;
    int kichThuoc = strlen(chuoi);
    int giu = 0; // C? d? x�c d?nh xem k� t? hi?n t?i c� n?m trong chu?i gi? l?i kh�ng
    
    // Di chuy?n t? cu?i chu?i l�n ph�a tru?c
    for (i = 0; i < kichThuoc; i++) {
        giu = 0; // M?c d?nh l� kh�ng gi? l?i
        
        // Ki?m tra xem k� t? hi?n t?i c� n?m trong chu?i gi? l?i kh�ng
        for (j = 0; giuLai[j] != '\0'; j++) {
            if (chuoi[i] == giuLai[j]) {
                giu = 1;
                break;
            }
        }
        
        // N?u kh�ng n?m trong chu?i gi? l?i, x�a k� t? n�y
        if (!giu) {
            // Di chuy?n c�c k� t? ph�a sau k� t? hi?n t?i l�n tru?c
            for (j = i; j < kichThuoc; j++) {
                chuoi[j] = chuoi[j + 1];
            }
            // Gi?m k�ch thu?c chu?i di 1
            kichThuoc--;
            // Gi?m bi?n d?m d? ki?m tra l?i k� t? v?a x�a
            i--;
        }
    }
}

int main() {
    char chuoi[100];
    
    printf("Nhap chuoi: ");
    gets(chuoi);
    
    xoaCacKyTuKhac(chuoi, "af");
    
    printf("Chuoi sau khi xoa: %s\n", chuoi);
    
    return 0;
}


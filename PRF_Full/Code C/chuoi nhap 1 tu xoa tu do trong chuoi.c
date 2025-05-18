#include <stdio.h>
#include <string.h>

void xoaCacKyTuKhac(char *chuoi, const char *giuLai) {
    int i, j;
    int kichThuoc = strlen(chuoi);
    int giu = 0; // C? d? xác d?nh xem ký t? hi?n t?i có n?m trong chu?i gi? l?i không
    
    // Di chuy?n t? cu?i chu?i lên phía tru?c
    for (i = 0; i < kichThuoc; i++) {
        giu = 0; // M?c d?nh là không gi? l?i
        
        // Ki?m tra xem ký t? hi?n t?i có n?m trong chu?i gi? l?i không
        for (j = 0; giuLai[j] != '\0'; j++) {
            if (chuoi[i] == giuLai[j]) {
                giu = 1;
                break;
            }
        }
        
        // N?u không n?m trong chu?i gi? l?i, xóa ký t? này
        if (!giu) {
            // Di chuy?n các ký t? phía sau ký t? hi?n t?i lên tru?c
            for (j = i; j < kichThuoc; j++) {
                chuoi[j] = chuoi[j + 1];
            }
            // Gi?m kích thu?c chu?i di 1
            kichThuoc--;
            // Gi?m bi?n d?m d? ki?m tra l?i ký t? v?a xóa
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


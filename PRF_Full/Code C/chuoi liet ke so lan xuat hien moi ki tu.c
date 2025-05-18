#include <stdio.h>
#include <string.h>

void liet_ke_so_lan_xuat_hien(char *chuoi) {
    int dem[256] = {0}; // M?ng d?m s? l?n xu?t hi?n c?a t?ng ký t? trong chu?i
    int len = strlen(chuoi); // Ð? dài c?a chu?i
    int i;
    // Duy?t qua chu?i và d?m s? l?n xu?t hi?n c?a t?ng ký t?
    for (i = 0; i < len; i++) {
        dem[(int)chuoi[i]]++;
    }

    // In ra s? l?n xu?t hi?n c?a t?ng ký t?
    printf("S? l?n xu?t hi?n c?a m?i ký t? trong chu?i:\n");
    for (i = 0; i < 256; i++) {
        if (dem[i] > 0) {
            printf("'%c': %d l?n\n", (char)i, dem[i]);
        }
    }
}
int main() {
    char chuoi[1000];

    printf("Nh?p chu?i: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0'; // Lo?i b? ký t? xu?ng dòng n?u có

    liet_ke_so_lan_xuat_hien(chuoi);

    return 0;
}



////	Nhap 1 chuoi sau do nhap 1 chuoi con dem xem xh may lan
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char str[1000], search[1000];
//    int count = 0, i = 0, j = 0, flag;
//
//    printf("Nh?p chu?i: ");
//    gets(str);
//
//    printf("Nh?p xâu c?n tìm: ");
//    gets(search);
//
//    while (str[i] != '\0') {
//        j = 0;
//        flag = 1;
//        while (search[j] != '\0') {
//            if (str[i + j] != search[j]) {
//                flag = 0;
//                break;
//            }
//            j++;
//        }
//        if (flag == 1) {
//            count++;
//        }
//        i++;
//    }
//
//    printf("T?n s? xu?t hi?n c?a xâu \"%s\" trong chu?i là: %d\n", search, count);
//
//    return 0;
//}


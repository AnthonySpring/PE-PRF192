#include <stdio.h>
#include <string.h>
#include <ctype.h>

//const int MAX_LENGTH = 100;

void demTanSoXuatHien(char chuoi[]) {
    int tan_so[10] = {0}; 
    int i;

    for (i = 0; chuoi[i] != '\0'; i++) {
        if (isdigit(chuoi[i])) {
            int so = chuoi[i] - '0'; // Chuyen kí tu thành so nguyên
            tan_so[so]++;
        }
    }		
    
    for (i = 0; i < 10; i++) {
        if (tan_so[i] > 0) {
            printf("%d: %d\n", i, tan_so[i]);
        }
    }
}

int main() {
    char chuoi[100]; // Thêm 1 v? trí cho kí t? k?t thúc chu?i '\0'
    gets(chuoi);
    demTanSoXuatHien(chuoi);

    return 0;
}

//    fgets(chuoi, sizeof(chuoi), stdin);
//
//    // Xóa kí t? xu?ng dòng t? chu?i nh?p vào
//    chuoi[strcspn(chuoi, "\n")] = '\0'; 



//nhap chuoi tim tan so xuat hien cua chu
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//const int ALPHABET_SIZE = 26; // S? lu?ng ch? cái trong b?ng ch? cái ti?ng Anh
//
//void demTanSoXuatHien(char chuoi[]) {
//    int tan_so[ALPHABET_SIZE]; // Không kh?i t?o m?ng v?i kích thu?c bi?n
//    int i;
//
//    memset(tan_so, 0, sizeof(tan_so)); // Kh?i t?o t?t c? các ph?n t? c?a m?ng thành 0
//
//    for (i = 0; chuoi[i] != '\0'; i++) {
//        if (isalpha(chuoi[i])) {
//            char ch = tolower(chuoi[i]); // Chuy?n kí t? thành ch? cái thu?ng
//            int index = ch - 'a'; // Chuy?n ch? cái thành ch? s? trong m?ng (0-25)
//            tan_so[index]++;
//        }
//    }
//
//    printf("T?n s? xu?t hi?n c?a các ch? cái:\n");
//    for (i = 0; i < ALPHABET_SIZE; i++) {
//        if (tan_so[i] > 0) {
//            printf("%c: %d\n", 'a' + i, tan_so[i]);
//        }
//    }
//}
//
//int main() {
//    char chuoi[100];
//
//    printf("Nh?p vào chu?i ch?: ");
//    fgets(chuoi, sizeof(chuoi), stdin);
//    chuoi[strcspn(chuoi, "\n")] = '\0'; // Xóa kí t? xu?ng dòng t? chu?i nh?p vào
//
//    demTanSoXuatHien(chuoi);
//
//    return 0;
//}


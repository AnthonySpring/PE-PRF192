#include <stdio.h>
#include <string.h>
#include <ctype.h>

//const int MAX_LENGTH = 100;

void demTanSoXuatHien(char chuoi[]) {
    int tan_so[10] = {0}; 
    int i;

    for (i = 0; chuoi[i] != '\0'; i++) {
        if (isdigit(chuoi[i])) {
            int so = chuoi[i] - '0'; // Chuyen k� tu th�nh so nguy�n
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
    char chuoi[100]; // Th�m 1 v? tr� cho k� t? k?t th�c chu?i '\0'
    gets(chuoi);
    demTanSoXuatHien(chuoi);

    return 0;
}

//    fgets(chuoi, sizeof(chuoi), stdin);
//
//    // X�a k� t? xu?ng d�ng t? chu?i nh?p v�o
//    chuoi[strcspn(chuoi, "\n")] = '\0'; 



//nhap chuoi tim tan so xuat hien cua chu
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//const int ALPHABET_SIZE = 26; // S? lu?ng ch? c�i trong b?ng ch? c�i ti?ng Anh
//
//void demTanSoXuatHien(char chuoi[]) {
//    int tan_so[ALPHABET_SIZE]; // Kh�ng kh?i t?o m?ng v?i k�ch thu?c bi?n
//    int i;
//
//    memset(tan_so, 0, sizeof(tan_so)); // Kh?i t?o t?t c? c�c ph?n t? c?a m?ng th�nh 0
//
//    for (i = 0; chuoi[i] != '\0'; i++) {
//        if (isalpha(chuoi[i])) {
//            char ch = tolower(chuoi[i]); // Chuy?n k� t? th�nh ch? c�i thu?ng
//            int index = ch - 'a'; // Chuy?n ch? c�i th�nh ch? s? trong m?ng (0-25)
//            tan_so[index]++;
//        }
//    }
//
//    printf("T?n s? xu?t hi?n c?a c�c ch? c�i:\n");
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
//    printf("Nh?p v�o chu?i ch?: ");
//    fgets(chuoi, sizeof(chuoi), stdin);
//    chuoi[strcspn(chuoi, "\n")] = '\0'; // X�a k� t? xu?ng d�ng t? chu?i nh?p v�o
//
//    demTanSoXuatHien(chuoi);
//
//    return 0;
//}


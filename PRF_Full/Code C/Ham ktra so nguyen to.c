#include<stdio.h>

int isprime(int n) {
    int i = 2;
    int flag = 1;
    if (n < 2) return flag = 0;
    while (i < n) {
        if (n % i == 0) {
            flag = 0;
            break; /*Ch? c?n tìm th?y 1 u?c s? là d? và thoát vòng l?p*/
        }
        i++;
    }
    return flag;
}

int main(void) {
    int n;
    printf("Nhap so tu nhien n = ");
    scanf("%d", &n);
    int check = isprime(n);
    if (check == 1) {
        printf("%d la so ngto", n);
    } else {
        printf("%d khong la so ngto", n);
    }
    return 0;
}


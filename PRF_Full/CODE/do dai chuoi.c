/*Create a program where users can input a string (without spaces), 
and the program displays the length of the string.*/
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main() {
    char str[MAX_LENGTH];

    // Nhap chuoi tu nguoi d�ng
    printf("%s",str);
    scanf("%s",&str);

    // T�nh do d�i cua chuoi su dung h�m strlen() trong thu vien string.h
    int length = strlen(str);

    // Hien thi do d�i cua chuoi
    printf("%d\n", length);

    return 0;
}

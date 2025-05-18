/*Create a program where users can input a string (without spaces), 
and the program displays the length of the string.*/
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main() {
    char str[MAX_LENGTH];

    // Nhap chuoi tu nguoi dùng
    printf("%s",str);
    scanf("%s",&str);

    // Tính do dài cua chuoi su dung hàm strlen() trong thu vien string.h
    int length = strlen(str);

    // Hien thi do dài cua chuoi
    printf("%d\n", length);

    return 0;
}

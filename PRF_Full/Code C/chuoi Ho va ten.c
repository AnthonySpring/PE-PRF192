#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Hàm d? chuy?n d?i chu?i thành d?ng "proper"
void proper_chuoi(char chuoi[]) {
    int i;

    // Chuy?n d?i ký t? d?u tiên c?a chu?i thành ch? hoa
    chuoi[0] = toupper(chuoi[0]);

    // Duy?t qua t?ng ký t? trong chu?i
    for (i = 1; i < strlen(chuoi); i++) {
        // N?u ký t? hi?n t?i là ch? cái và ký t? tru?c dó là d?u cách ho?c ký t? tru?c dó là s?
        if ((isalpha(chuoi[i])) && (chuoi[i - 1] == ' ' )) {
            // Chuy?n d?i ký t? hi?n t?i thành ch? hoa
            chuoi[i] = toupper(chuoi[i]);
        }
    }
}

// Hàm main d? th? nghi?m chuong trình
int main() {
    char chuoi[100];

    // Nh?p chu?i t? ngu?i dùng
    printf("Nhap vao mot chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    // G?i hàm proper_chuoi d? chuy?n d?i chu?i thành d?ng "proper"
    proper_chuoi(chuoi);

    // In ra chu?i dã chuy?n d?i
    printf("Chuoi sau khi chuyen doi la: %s\n", chuoi);

    return 0;
}


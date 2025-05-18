#include <stdio.h>
#include <string.h>
#include <ctype.h>

// H�m d? chuy?n d?i chu?i th�nh d?ng "proper"
void proper_chuoi(char chuoi[]) {
    int i;

    // Chuy?n d?i k� t? d?u ti�n c?a chu?i th�nh ch? hoa
    chuoi[0] = toupper(chuoi[0]);

    // Duy?t qua t?ng k� t? trong chu?i
    for (i = 1; i < strlen(chuoi); i++) {
        // N?u k� t? hi?n t?i l� ch? c�i v� k� t? tru?c d� l� d?u c�ch ho?c k� t? tru?c d� l� s?
        if ((isalpha(chuoi[i])) && (chuoi[i - 1] == ' ' )) {
            // Chuy?n d?i k� t? hi?n t?i th�nh ch? hoa
            chuoi[i] = toupper(chuoi[i]);
        }
    }
}

// H�m main d? th? nghi?m chuong tr�nh
int main() {
    char chuoi[100];

    // Nh?p chu?i t? ngu?i d�ng
    printf("Nhap vao mot chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    // G?i h�m proper_chuoi d? chuy?n d?i chu?i th�nh d?ng "proper"
    proper_chuoi(chuoi);

    // In ra chu?i d� chuy?n d?i
    printf("Chuoi sau khi chuyen doi la: %s\n", chuoi);

    return 0;
}


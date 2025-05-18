#include <stdio.h>
#include <string.h>

// H�m d? lo?i b? kho?ng tr?ng th?a
void trim(char *str) {
    int index, i;
    index = 0;

    // Lo?i b? kho?ng tr?ng d?u chu?i
    while (str[index] == ' ' || str[index] == '\t' || str[index] == '\n') {
        index++;
    }

    // Di chuy?n t?t c? c�c k� t? v? d?u chu?i
    i = 0;
    while (str[i + index] != '\0') {
        str[i] = str[i + index];
        i++;
    }
    str[i] = '\0'; // K?t th�c chu?i

    // Lo?i b? kho?ng tr?ng cu?i chu?i
    i = 0;
    index = -1;
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            index = i;
        }
        i++;
    }
    str[index + 1] = '\0';

    // Lo?i b? kho?ng tr?ng gi?a c�c t?
    char *dest = str;
    while (*str != '\0') {
        while (*str == ' ' && *(str + 1) == ' ') str++;
        *dest++ = *str++;
    }
    *dest = '\0';
}

int main() {
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Lo?i b? k� t? xu?ng d�ng

    trim(str);
    printf("Chuoi sau khi cat: '%s'\n", str);

    return 0;
}


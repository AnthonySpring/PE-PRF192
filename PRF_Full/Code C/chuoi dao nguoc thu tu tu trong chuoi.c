#include <stdio.h>
#include <string.h>

void dao_nguoc_tu(char *chuoi) {
    int len = strlen(chuoi);
    int i, j, start, end;

    // �?o ngu?c to�n b? chu?i
    for (i = 0, j = len - 1; i < j; i++, j--) {
        char temp = chuoi[i];
        chuoi[i] = chuoi[j];
        chuoi[j] = temp;
    }

    // �?o ngu?c t?ng t? trong chu?i
    i = 0;
    while (i < len) {
        // B? qua c�c d?u c�ch ? d?u chu?i ho?c gi?a c�c t?
        while (i < len && chuoi[i] == ' ') {
            i++;
        }

        start = i;
        // T�m v? tr� k?t th�c c?a t?
        while (i < len && chuoi[i] != ' ') {
            i++;
        }
        end = i - 1;

        // �?o ngu?c t?
        for (j = start; j < end; j++, end--) {
            char temp = chuoi[j];
            chuoi[j] = chuoi[end];
            chuoi[end] = temp;
        }
    }
}

int main() {
    char chuoi[1000];
    
    printf("Nh?p chu?i: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    // Lo?i b? k� t? xu?ng d�ng n?u c�
    if (chuoi[strlen(chuoi) - 1] == '\n') {
        chuoi[strlen(chuoi) - 1] = '\0';
    }

    dao_nguoc_tu(chuoi);

    printf("Chu?i sau khi d?o ngu?c th? t? c�c t?: %s\n", chuoi);
    
    return 0;
}
	

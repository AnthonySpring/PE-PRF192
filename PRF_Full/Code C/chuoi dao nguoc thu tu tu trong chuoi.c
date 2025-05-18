#include <stdio.h>
#include <string.h>

void dao_nguoc_tu(char *chuoi) {
    int len = strlen(chuoi);
    int i, j, start, end;

    // Ð?o ngu?c toàn b? chu?i
    for (i = 0, j = len - 1; i < j; i++, j--) {
        char temp = chuoi[i];
        chuoi[i] = chuoi[j];
        chuoi[j] = temp;
    }

    // Ð?o ngu?c t?ng t? trong chu?i
    i = 0;
    while (i < len) {
        // B? qua các d?u cách ? d?u chu?i ho?c gi?a các t?
        while (i < len && chuoi[i] == ' ') {
            i++;
        }

        start = i;
        // Tìm v? trí k?t thúc c?a t?
        while (i < len && chuoi[i] != ' ') {
            i++;
        }
        end = i - 1;

        // Ð?o ngu?c t?
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

    // Lo?i b? ký t? xu?ng dòng n?u có
    if (chuoi[strlen(chuoi) - 1] == '\n') {
        chuoi[strlen(chuoi) - 1] = '\0';
    }

    dao_nguoc_tu(chuoi);

    printf("Chu?i sau khi d?o ngu?c th? t? các t?: %s\n", chuoi);
    
    return 0;
}
	

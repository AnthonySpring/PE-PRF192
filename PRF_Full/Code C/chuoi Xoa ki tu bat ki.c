#include <stdio.h>
#include <string.h>

void xoa_ki_tu(char *chuoi, char ki_tu) {
    int i, j = 0;
    int len = strlen(chuoi);
    
    for (i = 0; i < len; i++) {
        if (chuoi[i] != ki_tu) {
            chuoi[j] = chuoi[i];
            j++;
        }
    }
    chuoi[j] = '\0';
}	

int main() {
    char chuoi[100];
    char ki_tu;
    
    printf("Nh?p chu?i: ");
    scanf("%s", chuoi);
    
    printf("Nh?p k� t? mu?n x�a: ");
    scanf(" %c", &ki_tu);
    
    xoa_ki_tu(chuoi, ki_tu);
    
    printf("Chu?i m?i sau khi x�a k� t? '%c': %s\n", ki_tu, chuoi);
    
    return 0;
}


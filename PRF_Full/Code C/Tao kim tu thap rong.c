#include <stdio.h>

int main() {
    int i,j,k,h;
    printf("Nh?p chi?u cao c?a hình kim t? tháp (h < 20): ");
    scanf("%d", &h);

    if (h >= 20) {
        printf("Chi?u cao ph?i nh? hon 20.\n");
    } else {
        for ( i = 1; i <= h; i++) {
            // In kho?ng tr?ng
            for ( j = i; j < h; j++) {
                printf(" ");
            }

            // In d?u sao
            for ( k = 1; k <= 2 * i - 1; k++) {
                if (k == 1 || k == 2 * i - 1) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}


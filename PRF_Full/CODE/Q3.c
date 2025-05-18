#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	int n,i,j;
    char ch;
    char chars[20];

    do {
        printf("\nNhap so n (5<n<20):");
        scanf("%d", &n);
    } while (n < 5 || n > 20);

    printf("\nNhap vao %d ki tu:",n);
    for ( i = 0; i < n; i++) {
        scanf(" %c", &ch);
        chars[i] = ch;
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            int cmp = tolower(chars[j]) - tolower(chars[j + 1]);
            if (cmp > 0) {
                char temp = chars[j];
                chars[j] = chars[j + 1];
                chars[j + 1] = temp;
            }
        }
    }

    printf("\nOUTPUT:");
    printf("\nMang sau khi sap xep tang dan la:\n");
    for (i = 0; i < n; i++) {
        printf("%c ", chars[i]);
    }
return 0;
}


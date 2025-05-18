#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	   int r, n, count = 1;

    scanf("%d", &r);
	int i, j;
    // Print Floyd's Triangle with r rows
    for (i = 1; i <= r; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", count++);
        }
        printf("\n");
    }
return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	 int n, i, j, k;

    scanf("%d", &n);
	printf("\nOUTPUT:\n");
    for (i = 1; i <= n; i++) {
        k = n - i + 1;
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (j = 1; j <= k; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

return 0;
}


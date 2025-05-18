#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	int n, i, j;
    do {
        scanf("%d", &n);
    }while (n < 5);
	int val=1;
	printf("\nOUTPUT:\n");
    for (i =0; i <= n; i++) {
        for (j = i+1; j <= n; j++) {
            printf("%7d", val*val);
            val++;
        }
        printf("\n\n");
    }
return 0;
}


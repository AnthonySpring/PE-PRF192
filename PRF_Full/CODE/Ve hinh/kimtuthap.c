#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	 int h,i,j;
   
    scanf("%d", &h);
    if (h >= 20 || h <= 0) {
        printf("Invalid input. Height must be less than 20 and greater than 0.\n");
        return 1;
    }
    for (i = 1; i <= h; i++) {
        for (j = 1; j <= h - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

return 0;
}


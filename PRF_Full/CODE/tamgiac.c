#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	
   int i, j, row;
    scanf("%d", &row);
    printf("OUTPUT:\n");
    for(i = 1; i <= row; i++){
        for(j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
    }

    


return 0;
}


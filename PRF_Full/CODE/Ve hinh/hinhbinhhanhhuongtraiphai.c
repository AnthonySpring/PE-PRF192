#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	int h, l, i, j;
    scanf("%d", &h);
    scanf("%d", &l);
    printf("\nOUTPUT:\n");
    for (i = 0; i < h; i++)
    {
        for (j = 0; j < l + i; j++)
        {
            if (j < i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

return 0;
}


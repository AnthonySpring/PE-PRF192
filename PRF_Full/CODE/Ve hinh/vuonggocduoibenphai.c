#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	 int n, i, j;
    scanf("%d", &n);
    printf("\nOUTPUT:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == n || j == n || j == n - i + 1)//hollow
            //if (j >= n - i + 1 || j == n || i == n)//filled
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

return 0;
}


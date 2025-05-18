#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; ++j)
		{
			if (j == n || i == n || j == n - i + 1)
				printf("*");
			else printf(" ");
		}
		printf("\n");
	}

return 0;
}


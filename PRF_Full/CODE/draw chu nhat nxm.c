#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(i==1||i==n||j==1||j==m)
			printf("*");
			else printf(" ");
		}
		printf("\n");
	}

return 0;
}


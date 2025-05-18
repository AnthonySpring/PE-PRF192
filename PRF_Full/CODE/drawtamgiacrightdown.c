#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int h,i,j;
	scanf("%d",&h);
	for(i=1;i<h;i++){
		for(j=1;i<=h;j++){
			if(j<=h-1) printf(" ");
			else printf("*");
		}
		printf("\n");
	} 

return 0;
}


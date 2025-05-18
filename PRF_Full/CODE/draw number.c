#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int i,j,h;
	scanf("%d",&h);
	printf("\nOUTPUT:\n"); 
	for(i=0;i<h;i++){
		for(j=0;j<i+1;j++){
			printf("%d ",j+1);
		}
		printf("\n");
	}

return 0;
}


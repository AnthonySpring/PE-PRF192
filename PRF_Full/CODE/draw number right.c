#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	int i,j,h,k;
	scanf("%d",&h);
	printf("\nOUTPUT:\n"); 
	for(i=0;i<h;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(j=0;j<h-i;j++){
			printf("%d ",j+1);
				
			}
		printf("\n");
	}
return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int h,i,j;
	scanf("%d",&h);
	for(i=0;i<h;i++){
	//in ra i dau cach
		for(j=0;j<i;j++){
			printf("  ");
		}
		for(j=0;j<h-i;j++){
			printf("# ");
				
			}
		printf("\n");
	}
return 0;
}


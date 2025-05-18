#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n,sum,i=0;
	do{
		scanf("%d",&n);
		sum+=n;
		i++;
	}while(n!=0);
	printf("Sum=%d",sum);

return 0;
}


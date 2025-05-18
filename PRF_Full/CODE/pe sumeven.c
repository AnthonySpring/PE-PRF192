#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	int a[50],i,sum=0;
	int n=6;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]%2==0) sum+=a[i];
	}
	printf("\nOUTPUT:");
	printf("\n%d",sum);

return 0;
}


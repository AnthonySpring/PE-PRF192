#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	int i,n,a[50];
	do{
		scanf("%d",&n); 
	}while(n>10);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]); 
	for(i=0;i<n;i++)
		if(a[i]%2==0)
			a[i]*=a[i];
	printf("%d",a[i]);

	

return 0;
}


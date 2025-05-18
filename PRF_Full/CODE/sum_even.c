#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	int i,sum=0;
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b){
		printf("Invalid");
		return 1;
	}
	for(i=a;i<=b;i++){
		if(i%2==0) sum+=i;
	}
	printf("\nOUTPUT:");
	printf("\n%d",sum);

return 0;
}


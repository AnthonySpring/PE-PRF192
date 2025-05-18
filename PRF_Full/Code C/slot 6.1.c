#include<stdio.h>
int main(){
	int n;
	int sum=0;
    while(1){
    	printf("\nn= ");
    	scanf("%d",&n);
    	if(n<0) continue;
    	if(n==0) break;
    	sum +=n;
    	printf("\ns=%d",sum);
	}
	printf("\nsum = %d",sum);
	return 0;
}

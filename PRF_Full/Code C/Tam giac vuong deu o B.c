#include<stdio.h>
int main(){
	int i;
	int j,n,z;
	printf("nhap n=");
	scanf("%d",&n);
	for (i=0;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
    printf("\n");		
	}
	return 0;
}

#include<stdio.h>

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int i,j;
	for( i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			if(j==0 || j==n-1 || i==0 ||i==m-1){
				printf("* ");
			}
		else 
			printf("  ");
		}
		printf("\n");
	}
	return 0;
}


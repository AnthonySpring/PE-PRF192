#include<stdio.h>
void veHinhvuong(int n){
	int i,j;
	for (i=0;i < n; i++){
		for(j=0; j<n;j++){
			if (j ==0 || i==0 || i==n-1 || j==n-1)
			printf("* ");
			else 
			printf("  ");
	} 		
		printf("\n");	
	}
}
main(){
	int n;
	printf("nhap n ");	
	scanf("%d",&n);
   	veHinhvuong(n);
	}

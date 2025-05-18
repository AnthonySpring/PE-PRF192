#include<stdio.h>
int main(){
	int a[10][10]={{1,2,3,4,5},
	               {2,3,4,5,6},
				   {3,4,5,6,7}};
	int i,j,n=3,m=3;//3 hang 3 cot
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	//tim min
	int min=a[0][0];
	for (i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(a[i][j]<min){
				min=a[i][j];
			}
		}
	}			
	printf("%d",min);   
	return 0;			
				
					
}

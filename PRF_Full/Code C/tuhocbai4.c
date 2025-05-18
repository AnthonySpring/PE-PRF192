#include<stdio.h>

void Max(float *count,float *max){
     float n;
	if (n>*max){
		*max=n;
	}
}
int main(){
	float sum=0,n,maxx=0;
	int dem=0;
	do{
		printf("nhap n=");
		scanf("%f",&n);
		if (n==0){
			break;
		}
		else{
		Max(&dem,&maxx);
		dem++;
		sum+=n;
		maxx=n;	
		}
	}while(n!=0);
	printf("Maximum number entered: %.2f\n", maxx);
	printf("so so nguyen dc nhap vao la %d",dem);
	printf("\ntong la %.2f",sum);
	return 0;
}

//nhap vao cac so nguyen n cho den khi n=0 dung lai xuat ra so lon nhat
#include<stdio.h>
int main(){
	int x;
	int sum=0;
	int max;
	int i=0;
	do{
		scanf("%d",&x);
		sum +=x;
		if (i==0){
			max = x;
			i++;
		}
		if (x>max && x!=0){
			max = x;
		}
		}while(x!=0);
	printf("%d",sum);
	printf("\ngtri lon nhat=%d",max);
	
	//bai 6
//	float y,maxy;
//	int n;
//	int i=0;
//	printf("nhap n = ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		printf("nhap y = ");
//		scanf("%f",&y);
//		if (i==1 || y>maxy){
//			maxy=y;
//	}		
//		}
//	printf("\nMaxy=%f",maxy);	
		return 0;
		
		
	}

#include<stdio.h>
int main(){
	int n,i,sum=0;
	printf("nhap 6 so:");
	for(i=0;i<6;i++){
		scanf("%d",&n);
		if(n%2==0){
			sum+=n;
		}
	}
	printf("tong la %d",sum);
	return 0;
}
//#include<stdio.h>
//void nhapMang(int a[],int *n){//n solg phantu thucte
//	printf("nhap so lg=");
//	scanf("%d",&*n);
//	printf("nhap mang: \n");
//	int i;
//	for(i=0;i<*n;i++){
//		printf("a[%d]= ",i);
//		scanf("%d",(a+i));//&a[i]
//	}
//}
//int sum(int a[],int*n){
//	int i,tong=0;
//	for(i=0;i<*n;i++){
//		if(a[i]%2==0){
//			tong+=a[i];
//		}
//	}	
//	return tong;
//}
//int main(){
//	int a[100],n,tongChan;
//	nhapMang(a,&n);
//	tongChan=sum(a,&n);
//	printf("tong cac so chan la %d",tongChan);
//	return 0;
//}


#include<stdio.h>
//int tong(int a,int b){
//	sum=a+b;
//	return sum;
//}
//int isPrime(int x){//ktra so ngto
//	if(x<2) return 0;
//	int i;
//	for (i=2;i*i<=x;i++){
//		if(x%i==0) return 0;
//	}
//	return 1;
//}
//int isAlpha(char c){//ktra chu cai
//	if(c>='0'&&c<='9'){
//		return 1;
//	}
//return 0;
//}
//void nhap(int*x){
//	scanf("%d",x);
//}
#include "D:\\Code C\\thuviencacham.h"
void nhapMang(int a[],int *n){//n solg phantu thucte
	printf("nhap so lg=");
	scanf("%d",&*n);
	printf("nhap mang: \n");
	int i;
	for(i=0;i<*n;i++){
		printf("a[%d]= ",i);
		scanf("%d",(a+i));//&a[i]
	}
}
void xuatMang(int *a,int n){
	printf("\nxuat mang: \n ");
	int i;
	for(i=0;i<n;i++){
		printf("%d",a[i]);//*(a+i)
	}
}
int demNgto(int a[],int n){
	int count =0;
	int i;
	for (i=0;i<n;i++){
		if (isPrime(a[i])){
			count++;
		}
	}
	return count;
}
void minMax(int a[],int n,int *min,int *max){
	int i;
	*min = *max = a[0];
	for (i=1;i<n;i++){
		if (a[i]<*min){
			*min=a[i];
		}
	    if (a[i]>*max){
	    	*max=a[i];
		}	
	}
}
void sapXep(int a[],int n){
	int i,j;
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int tg=a[i];
				a[i]=a[j];
				a[j]=tg;
             // swap(&a[i],&a[j]);
			}
		}
	}
}
int ktMangDuong(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		if(a[i]<=0) return 0;
	}
	return 1;
}
int ktNgto(int a[],int n){
	int i;
	for (i=0;i<n;i++){
		if (isPrime(a[i]==0)) return 0;
	}
	return 1;
}
int ktMangTangDan(int a[],int n){
	int i;
	for(i=0;i<n-1;i++){
		if(a[i]>a[i+1]) return 0;
	}
	return 1;
}
int ktMangDanDau(int a[],int n){
	int i;
	for (i=0;i<n-1;i++){
		if(a[i]*a[i+1]>=0) return 0;
	}
	return 1;
}
int main(){
	int a[100],n;
	nhapMang(a,&n);
	xuatMang(a,n);
	printf("\n so lg so ngto trong mang la %d",demNgto(a,n));
	int min,max;
	minMax(a,n,&min,&max);
	printf("\nMin = %d,Max = %d",min,max);
	    if (ktMangTangDan(a,n)) printf("\nMang tang dan");
	  else printf("\nKhong phai mang tang dan");  
	sapXep(a,n);
	xuatMang(a,n);
	if(ktMangTangDan(a,n)) printf("\nMang tang dan");
	else printf("\nKhong phai mang tang dan");
	return 0;
}

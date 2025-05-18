#include<stdio.h>
void nhapMang(int a[],int *n){
	printf("nhap so lg=");
	scanf("%d",&*n);
	printf("nhap mang: \n");
	int i;
	for (i=0;i<*n;i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void xuatMang(int *a,int n){
	printf("\nxuat mang: \n");
	int i;
	for (i=0;i<n;i++){
		printf("%d ",a[i]);
    }
}
int MangTangDan(int a[],int n){
	int i;
	for (i=0;i<n-1;i++){
		if (a[i]>a[i+1]){
			printf("phan tu dau tien lam mat tinh tang dan cua day la %d",a[i+1]);
		return 0;
	}
	}
	return 1;
}
int main(){
	int a[100],n;
	nhapMang(a,&n);
	if (MangTangDan(a,n)){
	printf("mang tang dan");
}else{
    printf("\nmang k tang dan");	
}
    
	xuatMang(a,n);
	return 0;
}

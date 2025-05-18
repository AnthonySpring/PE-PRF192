#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void nhapmang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);	
		//a[i]=rand()%30;
	}
}
void hienmang (int a[],int n){
	int i;
	printf("\nOUTPUT:");
	printf("\n");
	for(i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}
	printf("%d",a[n-1]);
}
int firstMax(int a[],int n){
	int max,vt,i;
	max=a[0];
	for(i=0;i<n;i++)
		if(a[i]>max){
			max=a[i];
			vt=i;
		}
	return vt;
	
}
int lastMax(int a[],int n){
	int max,vt,i;
	max=a[0];
	for(i=0;i<n;i++)
		if(a[i]>=max){
			max=a[i];
			vt=i;
		}
	return vt;
}
int firstMin(int a[],int n){
	int min,vt,i;
	min=a[0];
	for(i=0;i<n;i++)
		if(a[i]<min){
			min=a[i];
			vt=i;
		}
	return vt;
}
int lastMin(int a[],int n){
	int min,vt,i;
	min=a[0];
	for(i=0;i<n;i++)
		if(a[i]<=min){
			min=a[i];
			vt=i;
		}
	return vt;
}
int main(){
	int a[50],n=6;
	nhapmang(a,n);
	hienmang(a,n);
	printf("\nVi tri lon nhat dau tien la %d",firstMax(a,n));
	printf("\nVi tri lon nhat cuoi cung la %d",lastMax(a,n));
	printf("\nVi tri nho nhat dau tien la %d",firstMin(a,n));
	printf("\nVi tri nho nhat cuoi cung la %d",lastMin(a,n));
	
	

return 0;
}


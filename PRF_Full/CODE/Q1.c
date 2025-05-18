#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void nhapmang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);	
	}
}
void hienmang (int a[],int n){
	int i;
	printf("\n");
	for(i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}
	printf("%d\n",a[n-1]);
}
void CountElements(int a[],int n){
	int mask[n];
	int i,j,count;
	for(i=0;i<n;i++) mask[i]=0;
	for(i=0;i<n;i++){
		if(mask[i]==0){
			count=1;
			for(j=i+1;j<n;j++){
				if(a[i]==a[j]){
					count++;
					mask[j]=1;
				}
			}
			printf("%d(%d) ",a[i],count);
		}
	}
}
int main(){
	int a[50],n;
	printf("Enter N = ");
	scanf("%d",&n);
	nhapmang(a,n);
	printf("\nMang vua nhap la:");
	hienmang(a,n);
	printf("\nOUTPUT:");
	printf("\nThong ke cac gia tri trong mang:");
	CountElements(a,n);
	

return 0;
}


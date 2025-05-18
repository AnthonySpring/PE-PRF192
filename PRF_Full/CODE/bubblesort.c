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
	printf("\nOUTPUT:");
	printf("\n");
	for(i=0;i<n-1;i++){
		printf("%d; ",a[i]);
	}
	printf("%d",a[n-1]);
}
int swap(int *a,int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
void bubbleSort(int a[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=1;j<n;j++){
			if(a[j]>a[j-1]){
				swap(&a[j],&a[j-1]);
			}
		}
	}
} 
int main(){
	int a[50];
	int n=5;
	nhapmang(a,n);
	printf("\nMang truoc khi sap xep:");
	hienmang(a,n);
	bubbleSort(a,n);
	printf("\nMang sau khi sap xep:");
	hienmang(a,n);
	

return 0;
}


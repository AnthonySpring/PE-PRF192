#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int swap(int *a,int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}

int swapchar(char *a,char *b){
	char tmp=*a;
	*a=*b;
	*b=tmp;
}
void hienmangKitu(char a[],int n){
	int i;
	for (i=0;i<n-1;i++){
		printf("%c, ",a[i]);
	}
	printf("%c.",a[i]);
}

void nhapMangKitu(char a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("a[%d] = ",i);
		fflush(stdin);
		scanf("%c",&a[i]);
	}
}

void nhapmang(int a[],int n){
	int i;
	for(i=0;i<n;i++){	 
//		printf("a[%d] = ",i);		
//		scanf("%d",&a[i]);
		a[i]=rand()%30;	 
	}
}
void hienmang(int a[],int n){
	int i;
	for (i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}
	printf("%d",a[i]);
}

void SelecttionSort(int a[],int n){
	int i,j;
	int vtmin;
	for (i=0;i<n;i++){
		vtmin=i;
		for (j=i+1;j<n;j++){
			if (a[j]<a[vtmin]) vtmin=j;
		}
		if (vtmin!=i){
			swap(&a[i],&a[vtmin]);
		}
//		printf("\nMang A tai buoc thu %d:",i);
//		hienmang(a,n);
	}
}

void SelecttionSortchar(char a[],int n){
	int i,j;
	int vtmin;
	for (i=0;i<n-1;i++){
		vtmin=i;
		for (j=i+1;j<n;j++){
			if (a[j]<a[vtmin]) vtmin=j;
		}
		if (vtmin>i){
			swapchar(&a[i],&a[vtmin]);
		}
	}
}
void bubbleSort(int a[],int n){
	int i,j,swapped=0;
	for (i=0;i<n-1;i++){
		swapped=0;
		for (j=1  ;j<n ;j++){
			if (a[j]<a[j-1]){
				swap(&a[j],&a[j-1]);
				swapped=1;
			}
		}		
		printf("\nMang A tai vong thu %d: ",i);
		hienmang(a,n);
		if(swapped==0)  break;
	}
	
}
void bubbleSortchar(char a[],int n){
	int i,j,swapped=0;
	for (i=0;i<n-1;i++){
		swapped=0;
		for (j=1  ;j<n ;j++){
			if (a[j]<a[j-1]){
				swapchar(&a[j],&a[j-1]);
				swapped=1;
			}
		}		
//		printf("\nMang A tai vong thu %d: ",i);
//		hienmang(a,n);
		if(swapped==0)  break;
	}
	
}
int main(){
	int i,j;
	int a[50];
	char b[50];
	int n=4;
	nhapMangKitu(b,n);
	printf("\n");
	hienmangKitu(b,n);
	printf("\n");
	bubbleSortchar(b,n);
	printf("\n ");
	
	hienmangKitu(b,n);
//	nhapmang(a,n);
//	printf("\nMang truoc khi sap xep:");
//	hienmang(a,n);
//	bubbleSort(a,n);
//	printf("\nMang sau khi sap xep:");
//	hienmang(a,n);

return 0;
}


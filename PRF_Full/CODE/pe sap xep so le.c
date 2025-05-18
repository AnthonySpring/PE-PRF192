#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void hienmang (int a[],int n){
	int i;
	printf("\nOUTPUT:");
	printf("\n");
	for(i=0;i<n-1;i++){
		if(a[i]%2!=0) printf("%d\n",a[i]);
	}
}
void nhapmang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);	
	}
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
			if((a[j]<a[j-1] && a[j]%2==1) || (a[j]<a[j-1] && a[j]%2!=0 && a[j-1]%2!=0)){
				swap(&a[j],&a[j-1]);
			}
		}
	}
}
int main(){
	int a[50],n,i;
	scanf("%d",&n);
	nhapmang(a,n);
	bubbleSort(a,n);
	hienmang(a,n); 
    

return 0;
}


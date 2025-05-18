#include<stdio.h>
void swap(int *a, int *b){
	int temp=*a;
	    *a=*b;
	    *b=temp;
}
void selectionSort (int a[], int n){
	int i,j,min_idx;
	for (i=0;i<n-1;i++){
		min_idx=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min_idx]){
				min_idx=j;
			}
		}
	swap(&a[min_idx],&a[i]);	
	}
}
int main(){
	int i,n;
	
	int a[n];
	printf("nhap %d so nguyen:\n", n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	selectionSort(a,n);
	printf("mang sau khi sap xep la: ");
	for(i=0;i<n;i++){// in ra cac ptu cua mang
		printf("%d ",a[i]);
	}
	printf("\n");	
return 0;
}


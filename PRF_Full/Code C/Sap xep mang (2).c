#include<stdio.h>
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
void xuatMang(int a[],int n){
	printf("\nxuat mang: ");
	int i;
	for(i=0;i<n;i++){
		printf("%d",a[i]);//*(a+i)
	}
}
//void swap(int *a, int *b){
//	int temp=*a;
//	    *a=*b;
//	    *b=temp;
//}
//void selectionSort (int a[], int n){
//	int i,j,min_idx;
//	for (i=0;i<n-1;i++){
//		min_idx=i;
//		for(j=i+1;j<n;j++){
//			if(a[j]<a[min_idx]){
//				min_idx=j;
//			}
//		}
//	swap(&a[min_idx],&a[i]);	
//	}
//}
void sapXep(int a[],int n){
	int i,j;
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
}
int main(){
	int a[100],n;
	nhapMang(a,&n);
	sapXep(a,n);
	xuatMang(a,n);
	return 0;
}

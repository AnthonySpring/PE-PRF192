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
void deleteAt(int a[],int *n, int pos){
	//xoa 1 phan tu o vi tri thu pos
	//vdu 6 pt:1 2 3 4  5 6
	//goi ham deleteAt(a,6,2)=> 13456
	int i;
	if(pos<0 || pos>=n) return;
	for(i=pos;i<=*n-1;i++){
		a[i]=a[i+1];
	}
	*n=*n-1;
}
void insertAt(int a[],int n,int x,int pos){
	int i;
	if(pos<0||pos>n) return;
	for(i=n;i>pos;i--){
		a[i]=a[i-1];
	}
	a[pos]=x;
}
int main(){
	int a[50],*n,pos=2,x;
	scanf("%d",&n);
	/*nhapmang(a,n);
	printf("\nMang trc khi xoa:");
	hienmang(a,n);
	printf("\nMang sau khi xoa:");
	deleteAt(a,&n,2);
	hienmang(a,n);*/
	nhapmang(a,n);
	printf("\nMang trc khi insert:");
	hienmang(a,n);
	printf("\nMang sau khi insert:");
	insertAt(a,n,99,2);
	n++;
	hienmang(a,n);
	
return 0;
}


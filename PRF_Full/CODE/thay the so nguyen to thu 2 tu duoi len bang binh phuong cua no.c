//thay the so nguyen to thu 2 tu duoi len bang binh phuong cua no 

#include<stdio.h>
#include<math.h>

int checkPrime(int m){
   int i;
   if (m<=1) return 0;
   for (i=2; i*i<=m; i++){
   	if (m%i == 0) return 0;
   }
   return 1;
}
int main(){
	int n,i;
	int a[100];
	int count=0;
	printf("nhap n ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("nhap a[%d]= ",i);
		scanf("%d",&a[i]);		
	}
	for (i=n-1;i>=0;i--){
		if (checkPrime(a[i])){
			count++;
		if (checkPrime(a[i]) && count==2)
		a[i]=a[i]*a[i];
		}
	}
	for (i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;

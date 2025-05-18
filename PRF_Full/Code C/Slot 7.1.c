#include<stdio.h>
#include<math.h>
int tong(int);
void inUoc(int x);
int isPrime(int x);
void uocNgto(int x);
int tong2(int x,int);
void uocbth(int n);
int ngto(int n);
int main(){
	int n;
	scanf("%d",&n);
	int kq=tong(n);
	printf("kq tong tu 1 den %d la %d",n,kq);
	printf("\nKq 2 = %d",tong(20));
	printf("\ntong2 = %d",tong2(2,tong2(3,7)));
	printf("\nNgu %d", ngto(n));
//	uocNgto(n); printf("\n");
//	uocbth(n);
	return 0;	
}
int tong(int x){
	int i,sum=0;
	for(i=1;i<=x;i++){
		sum+=i;
	}
	return sum;
}
int tong2(int x,int y){
	return x+y;
}
int ngto(int n){
	if (n<2) return 0;//note
	int i;
	for (i=2;i<=sqrt(n);i++){
		if(n%2==0) {
			return 0;
		} 
	}
	return 1;
}
void uocbth(int n){
	int i;
	for (i=1;i<=n;i++){
		if (n%i==0) 
		{
			printf("%d\n",i);	
		}
	}
}
void uocNgto(int n){
	int i;
	for (i=2;i<=n;i++){
		if(n%1==0 && ngto(i) == 1) printf("%d",i);
	}
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isPrime(int n){
	if(n<2) return 0;
	int i;
	for(i=2;i<n/2;i++){
		if(n%1==0) return 0;
	}
	return 1;
}
int countPrime(int a,int n){
	int i,count=0;
	for(i=0;i<n;i++){
		if(isPrime(a[i])) count++;
	}
	return count;
}
void hienmang(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
int main(){
	int a[100],n,i;
	n=5;
	hienmang(a,n);
	isPrime(n);
	countPrime(a,n);

return 0;
}


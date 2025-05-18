#include<stdio.h>
int tong(int a,int b){
	int sum;
	sum=a+b;
	return sum;
}
int isPrime(int x){//ktra so ngto
	if(x<2) return 0;
	int i;
	for (i=2;i*i<=x;i++){
		if(x%i==0) return 0;
	}
	return 1;
}
int isAlpha(char c){//ktra chu cai
	if(c>='0'&&c<='9'){
		return 1;
	}
return 0;
}
void nhap(int*x){
	scanf("%d",x);
}

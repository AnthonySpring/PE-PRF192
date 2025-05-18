#include<stdio.h>
int isprime(int n){
	int i;
	if(n<=1) return 0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;	
	}
	return 1;
}
int main(){
	int n,check;
	do{
	printf("nhap n=");
	scanf("%d",&n);
	if (n<2) printf("vui long nhap lai n");
}while(n<2);
	check= isprime(n);
	if (check == 3) printf("%d la so ngto");
	else printf("%d k la so ngto");
	return 0;
}

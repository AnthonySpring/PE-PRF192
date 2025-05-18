#include<stdio.h>
int tong(int);
int main(){
    int n;
	scanf("%d",&n);
	int kq=tong(n);
	printf("kq tong tu 1 den %d la %d",n,kq);
	printf("\nKq 2 = %d",tong(20));
	printf("\ntong2 = %d",tong2(2,tong2(3,7)));
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



	


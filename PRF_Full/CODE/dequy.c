#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//de quy la trong ham fx lai co loi goi ham fx
//nhung voi tap du lieu nho hon 
int fibonacci(int n){
	if(n<=1) return n;
	else return fibonacci(n-1)+fibonacci(n-2);
}
int tong(int n){
 	if(n==0) return 0;
 	else return tong(n-1)+n;
} 
int main(){
	int n,i;
	scanf("%d",&n);
	//printf("tong=%d",tong(n));
	for(i=0;i<n;i++) printf("%d ",fibonacci(i));

return 0;
}


#include<stdio.h>
int main(){
	int n;
	do{
		scanf("%d",&n);
		if(n<0) printf("gia tri phai duong");
	}while(n<0);
	return 0;
}

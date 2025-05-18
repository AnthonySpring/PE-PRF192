#include<stdio.h>
int main(){
	int i,n;
	int tich=1;
	int sum=0;
	scanf("%d",&n);
	while(n!=0){
		tich*=n%10;
		n/=10;
	}
	printf("%d",tich);
}

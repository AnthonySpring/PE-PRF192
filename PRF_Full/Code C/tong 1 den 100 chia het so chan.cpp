#include<stdio.h>
int main(){
	int i,n=101,tong;
	if (n%2==0){
		i=0;
	}else {
		i=1;
	}
	for (i=1;i<=n;i=i+2){
			tong +=i;
		}

printf("tong la %d",tong);
	return 0;
	
}

#include<stdio.h>
int main(){
	int dvi,chuc,tram,n,tong;
	printf("nhap so:");
	scanf("%d",&n);
	if (n>99 && n<1000 ){
	tram= n/100;
	chuc=(n-tram*100)/10;
	dvi=(n-100*tram)%10;
	tong=tram+chuc+dvi;
	printf("tong la %d",tong);	
}else{
	printf("nhap sai r e");
}
	return 0;
	
	
}

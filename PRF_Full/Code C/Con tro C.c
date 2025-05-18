#include<stdio.h>
int main(){
//	int c;
//	printf("nhap c=");
//	scanf("%d",&c);
//	printf("\n gia tri cua var= %d",c);
//	printf("\n dia chi cua bien c trong bo nho la: %p",&c);
	
	int *pc,c;
	c=5;
	pc=&c;
	printf("gia tri con tro pc la %d",*pc);
	*pc=1;//thay doi gia tri con tro
	printf("gia tri con tro pc la %d",*pc);
	
	
	
}

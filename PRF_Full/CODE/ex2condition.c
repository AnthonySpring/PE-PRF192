/*giai pt bac nhat
ax+b=0
a,b nhap tu ban phim*/
#include<stdio.h>
int main(){
	int a,b,x;
	if(a==0&&b==0){
		printf("phuong trinh co vo so nghiem");
	}
	else if(a==0&&b!=0){
		printf("phuong trinh vo nghiem");
	}
	else(a!=0&&b!=0);{
		x=-b/a;
		printf("phuong trinh co nghiem x=%.2f",x);
	}
	return 0;
}

/*giai pt bac 2
ax*x+bx+c=0*/
#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	printf("nhap so a,b,c:"); 
	scanf("%d%d%d",&a,&b,&c); 
	float x1,x2,delta;
	delta=b*b-4*a*c;
	if(delta>0){
		printf("phuong trinh co hai nghiem");
		x1=(-b+sqrt(delta)) / 2*a;
		x2=(-b-sqrt(delta)) / 2*a; 
	}
	else if(delta=0){
		printf("phuong trinh co nghiem kep");
		x1=x2=-b / 2*a; 
	} 
	else(delta<0){
		printf("phuong trinh vo nghiem"); 
	} 
	return 0; 
}

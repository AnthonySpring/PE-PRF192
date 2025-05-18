#include<stdio.h>
int ucln(int a,int b){
	int i,uc;
	if (a < 0) a = -a; 
    if (b < 0) b = -b;
	for (i=1;i<=a && i<=b;i++ ){
		if(a % i== 0 && b % i ==0){
			uc=i;
		}
	}
	return uc;
}
int bcnn(int a,int b){
	int i,bc,c;
	if (c<0){
		c=-c;
	}
	c=a*b;
	bc=c/(ucln(a,b));
	return bc;
}
int main(){
	int a,b;
	if (a < 0) a = -a; 
    if (b < 0) b = -b;
	printf("nhap a va b lan luot la:");
	scanf("%d%d",&a,&b);
	printf("\nucln la %d",ucln(a,b));
	printf("\nbcnn la %d",bcnn(a,b));
	return 0;
}

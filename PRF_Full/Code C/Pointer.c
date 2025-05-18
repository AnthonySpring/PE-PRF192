#include<stdio.h>
void hoanDoi(int x, int y){
	int t=x;
	x = y;
	y = t;
	printf("trong main x=%d, y=%d\n",x,y);
}
void hoanDoi2(int *x, int *y){
	int t=*x;
	*x=*y;
	*y=t;
	printf("trong ham2: x= %d, y=%d\n",*x,*y);
}
//void timMinMax(int *min,int *max){
//	int n,i=0;
//	do{
//		printf("nhap n=");
//		scanf("%d",&n);
//		if(i==0 || n>*max){
//			*max=n;
//		if(i==0 || n<*min){
//			*min=n;
//		}
//		i++;
//		}while(n!=0);	
//}

int main(){
	int x=10,y=20;
	hoanDoi(x,y);
	printf("trong main x=%d, y=%d\n",x,y);
	hoanDoi2(&x,&y);
	printf("trong main sau hoandoi2 x= %d,y=%d\n",x,y);
	
//	int min,max;
//	timMinMax(&min,&max);
//	printf("\nMin=%d,max=%d",min.max);
//	
	
	
	
	
	
	
	
//	int a=10;
//	int *pa=&a;
//	printf("gia tri a = %d,dia chi bien a = %d\n",a,&a);
//	printf("gia tri pa = %d,dia chi bien pa = %d\n",pa,&pa);
//	printf("gia tri o vung nho pa tro den = %d",*pa);
//	*pa = 123;
//	printf("\na = %d",a);
//	return 0;

}

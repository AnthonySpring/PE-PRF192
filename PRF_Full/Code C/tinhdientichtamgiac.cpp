#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	printf("nhap 3 canh tam giac=");
	scanf("%f%f%f",&a,&b,&c);
	if (a+b>c && a+c>b && b+c>a){
		printf("3 canh tao thanh tam giac");
		
	}else{
		printf("3 canh k phai tam giac");
}	
    float p=(a+b+c)/2;
	float s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("\ndien tich=%f",s);
	return 0;
	
	
}

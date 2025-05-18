#include<stdio.h>
#include<math.h>
int main(){
	float R,H,SDAY,SXQ,V;
	float const PI = 3.14;
	printf("nhap bk va chieu cao la:");
	scanf("%f%f",&R,&H);
	SDAY=pow(R,2)*PI;
	SXQ=2*R*H*PI;
	V=PI*pow(R,2)*H;
	printf("SDAY la %.2f\nSXQ la %.2f\nV la %.2f",SDAY,SXQ,V);
	return 0;
	
}

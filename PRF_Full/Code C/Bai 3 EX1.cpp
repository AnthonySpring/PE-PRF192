#include<stdio.h>
#include<math.h>
int main(){
	float r,P,S;
	printf("ban kinh htron la:");
	scanf("%f",&r);
	P=2*r*M_PI;
	S=M_PI*r*r;
	printf("chu vi la %f , dien tich la %f",P,S);
	return 0;
}

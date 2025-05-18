#include <stdio.h>
#include <math.h>
int main(){
float xa,ya,xb,yb,xc,yc;
float AB,BC,AC;
float dientich,chuvi,p;
printf("nhap vao toa do A:");
scanf("%f%f",&xa,&ya);
printf("nhap vao toa do B:");
scanf("%f%f",&xb,&yb);
printf("nhap vao toa do C:");
scanf("%f%f",&xc,&yc);	
 AB= sqrt(pow(xa-xb,2)+pow(ya-yb,2));
 BC= sqrt(pow(xb-xc,2)+pow(yb-yc,2));
 AC= sqrt(pow(xa-xc,2)+pow(ya-yc,2));
 if (AB+BC>AC && AB+AC>BC && BC+AC>AB){
 	printf("\n ABC tao thanh tam giac");
 	}else{
 		printf("\n ABC k tao tam giac");
	 }
	 return 0;
}







	

//giai bai tap pt b2
#include<stdio.h>


int main() {
   	 float a,b,c,x1,x2,delta;
   	 printf("nhap a , b , c ");
   	 scanf("%f%f%f",&a ,&b ,&c);
   	
   	 if (a==0){
   	 	printf("\nloai");
		}else{
   	  delta = b*b-4*a*c;
   	  printf("\ndelta = %.2f",delta);
   }
   	 if (delta>0){
   	 	x1=(-b - sqrt(delta	))/(2*a);
   	 	x2=(-b + sqrt(delta))/(2*a);
   	 	printf("\npt co 2 no pb x1=%.2f,x2=%.2f",x1,x2);
		}else if (delta==0){
		x1= -b/(2*a);
		printf("\npt co no kep x1=x2=%.2f",x1);
	}else {
		printf("\npt vo nghiem");
	}
	}
   	 
   	

    
   
    
    
    
    
    
    
    
    
    
    
    

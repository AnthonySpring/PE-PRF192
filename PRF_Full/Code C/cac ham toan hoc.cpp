#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	printf("nhap a va b=");
	scanf("%d%d",&a,&b);

    float kq = float(a/b);
    printf("kq la %f",kq);
	printf("floor(a/b) = %f",floor(kq));
	printf("\n ceil(a/b)=%f", ceil(kq));
	printf("\n sqrt(kq)=%f",sqrt(kq));
	printf("\n pow(5.2,2)=%f",pow(5.2,2));
	printf("\n abs(5)=%d",abs(5));
	printf("\n fabs(5.5)=%f",fabs(5.5));
	return 0;  

	
	
}

    
    
    
    
    
    
    
    
    
    

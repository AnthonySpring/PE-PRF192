#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	int remainder,a,n=0,a1;
	
	scanf("%d", &a);
	a1=a;
	printf("\nOUTPUT:\n");
    while (a !=0 ){
     remainder=a%2;	
	 if(remainder!=0) break;
	 a/=2;
	 n++;
	}
	if(a>1) printf("%d is not power of 2",a1);
	else printf("%d", n);


return 0;
}


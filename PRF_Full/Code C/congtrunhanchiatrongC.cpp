#include<stdio.h>

int main() {
int a=10,b=3;
printf(" %d + %d = %d",a,b,a+b);
printf(" %d * %d = %d",a,b,a*b);
printf(" %d - %d = %d",a,b,a-b);
if (b!=0){
printf(" %d / %d = %.2f",a,b,(float) a / b);
}else {
	printf("bo k tinh dc");
}
printf(" %d %% %d = %d",a,b,a % b );
return 0;


}

#include<stdio.h>
int main(){
	char t,c1,c2;
	char c;
	int d;
	printf("the first character: ");
    scanf(" %c", &c1);
    printf("\nthe second character: ");
    scanf(" %c", &c2);
	if(c1>c2){	
    t=c1;
	c1=c2;
	c2=t;	
}
d=c2-c1;
printf("ASCII Code Difference: %d\n", d);
printf("Characters between %c and %c (inclusive) and their code values:\n", c1, c2);
for (c=c1;c<=c2;c++){
	printf ("%c : %d, %o, %X\n", c, c, c, c);
}
return 0;
}

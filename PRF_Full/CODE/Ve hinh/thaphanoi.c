#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int d=0;

void move(int n, char A, char B, char C){
	d++;
	if(n==1){
		printf("%c -> %c\n",A,C);
	}
	else{
		move(n-1,A,C,B);
	    printf("%c -> %c\n",A,C);
		move(n-1,B,A,C); 
	}
}
int main(){
	int n;
	 scanf("%d",&n);
	move(n,'A','B','C');
	printf("%d",d);

return 0;
}


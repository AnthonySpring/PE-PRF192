/*Write a program that swaps the values of two integer variables entered by the user, 
without using a temporary variable, and prints the result*/
#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("a=%d and b=%d\n",a,b);

	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("swap a=%d and b=%d",a,b);
	return 0;
} 

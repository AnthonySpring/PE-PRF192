/*Write a C program that calculates the area of a triangle. 
Your program prompts the user to enter the height and base,
accepts the user's input in decimal format, multiplies the product 
of the height and base by 0.5, stores the area in memory and outputs 
the area to 2 decimal places along with its address in memory in hexadecimal
format (use the %p conversion specifier to output an address).*/
#include<stdio.h>
int main(){
	float a,h,s;
	scanf("%f %f",&a,&h);
	s=a*h*0.5;
	printf("%.2f\n",s);
	printf("Dia chi cua dien tich trong bo nho: %p\n",&s);
	return 0;
} 

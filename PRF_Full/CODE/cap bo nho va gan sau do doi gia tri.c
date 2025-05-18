//cap phat bo nho cho con tro sau do gan cho 10, doi gia trij 20 va in gia tri moi
#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr=(int*)malloc(sizeof(int));
	*ptr=10;
	*ptr=20;
	printf("\nOutput:\n");
	printf("%d",*ptr);
	return 0;
} 

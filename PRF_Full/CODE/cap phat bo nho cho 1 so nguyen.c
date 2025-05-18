//cap phat bo nho dong cho mot so nguyen , gan gia tri va in no
#include<stdio.h>
#include<stdio.h> 
int main(){
	int *ptr=(int*)malloc(sizeof(int));
	*ptr=5;
	printf("%d",*ptr);
	free(ptr);
	return 0;
}

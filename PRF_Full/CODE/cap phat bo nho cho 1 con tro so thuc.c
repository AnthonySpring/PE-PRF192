//cap phat dong cho con tro so thuc
#include<stdio.h>
#include<stdio.h> 
int main(){
	float *fptr=(float*)malloc(sizeof(float));
	*fptr=3.14;
	printf("%.2f",*fptr);
	free(fptr);
	return 0;
}

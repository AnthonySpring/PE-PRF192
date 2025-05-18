#include<stdio.h>
#include<stdlib.h>
int main (){
	int i=0;
	srand(time(NULL));
	for (i=0;i<10;i++){
	//rand()%(max-min+1)+min
//	int x=rand()%(100-50+1)+50;//50 den 100
	int x=rand()%(30-10+1)+10;//10 den 30
	printf("\nx=%d",x);
}	
return 0;
}


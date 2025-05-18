//dieu kien if ...else
#include<stdio.h>
int main(){
	int mark;
	int reward;
	int noOfShirts;
	printf("Your mark:"); scanf("%d",&mark);
	if(mark>7 && mark<=9){
		reward=500000;
		noOfShirts=2;
	}
	else if(mark>9){
		reward=10000;
		noOfShirts=5;
	}
	else{
		reward=0;
		noOfShirts=0;
	}
	printf("rewark=%d, no0fShirts=%d",reward,noOfShirts);
	return 0;
}

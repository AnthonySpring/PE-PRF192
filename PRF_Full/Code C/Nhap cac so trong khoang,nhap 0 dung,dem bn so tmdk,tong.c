#include<stdio.h>
int main(){
	int n;
	int count=0;
	int sum=0;	
do{
	printf("\nEnter an integer in [1-10](Press 0 to quit):");
	scanf("%d",&n);
	if (n<-10 || n>10 ){
		printf("Incorrect input, try again");
	}else{
	if(n==0) break;
	if (n>0){
	count++;
	sum+=n;	
            }  
        }
}while(1);
	printf("\nNumber of integer entered: %d", count);
    printf("\nSum: %d", sum);
	return 0;
}

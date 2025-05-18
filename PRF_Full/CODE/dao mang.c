 /*Reverse an Integer Array Write a program that lets the user input n integers into an array 
 (where n is specified by the user and n<15), and then displays the array in reverse order.*/
#include<stdio.h>
int main(){
	int i,n;
	do{scanf("%d",&n);
	}while(n> 15|| n< 0);
	int arr[n];
	for(i=0;i<n;i++){
		scanf(" %d",&arr[i]);
	}
	for(i=n-1;i>=0;i--){
		printf("%d ", arr[i]);
	}
	return 0;
}

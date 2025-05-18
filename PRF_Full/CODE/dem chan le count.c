/*Count Odd and Even Numbers Write a program that allows users to enter an 
array of n integers (n is specified by the user, n<15). 
The program should count and display the number of odd 
numbers and even numbers in the array.*/
#include<stdio.h>
int main(){
	int arr[15];
	int odd=0, even=0,n;
	do{
		scanf("%d",&n);
	}while(n>15);
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			even++;
		}else{
			odd++;
		}
	}
		printf("%d\n",even);
		printf("%d\n",odd);
	return 0;
}

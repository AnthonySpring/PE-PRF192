/*Develop a program that allows the user to enter a three-digit number. 
The program should then check and display 1 if the number is an Armstrong number, otherwise 0. 
An Armstrong number is an n-digit number that is equal to the sum of 
its own digits each raised to the power of n. For a three-digit number, this means abc = a^3 + b^3 + c^3.*/
#include<stdio.h>
#include<math.h>
int main(){
	int n,original,remainder,result=0;

	do{
		scanf("%d",&n);
	}while(n<100 || n>999);
	original=n;
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, 3);
        original /= 10;
    }
    if (result == n) {
        printf("1\n", n);
        
    } else {
        printf("0\n", n);
}
return 0;
}

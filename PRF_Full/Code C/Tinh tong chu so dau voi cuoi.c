//#include<stdio.h>
//int reverse_num(int n){ 
//  int reverse = 0; 
//  while (n > 0) {
//    reverse = reverse * 10 + n % 10;
//    n /= 10;
//  }
//  return reverse;
//}
//int main(){
//	int i,d,c,n,a;
//	int tich=1;
//	int sum=0;
//	scanf("%d",&n);
//	c=n%10;
//	a=reverse_num(n);
//	d=a%10;
//	printf("%d",c+d);
//}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	int sum = 0;
	scanf("%d",&n);
	int a = n ;
	int c=0;
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	while(a!=0){
		a/=10;
		c++;
	}
	while(c!=0){
		if(c==c){
			sum=sum+n%10;
			break;
			}
			n/=10;
			c--;
		}
	
	while(c>0){
		if(c==1){
			sum=sum+n%10;
			break;
			}
			n/=10;
			c--;
		}
	
		printf("%d ",sum);
		//muon nhap tren 10 so thi su dung double
	

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

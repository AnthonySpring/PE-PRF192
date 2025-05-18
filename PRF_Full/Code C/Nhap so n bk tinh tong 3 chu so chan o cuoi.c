#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//int tong1(int n){
//	int i,sum1=0;
//  for(i=0;i<n-4;i+=2){
//  	if(i%2==0){
//  		sum1=sum1+i;
//	  }
//  }
//  return sum1;
//}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
//  int i1,i2,i,n,sum=0,a,c;
//  scanf("%d",&n);
//  for(i=n;i>0;i-=2){
//  	if(i%2==0){
//  		sum=sum+i;
//	  }
//  }
//   a=tong1(n);
  
  int n,i,sum=0;
  scanf("%d",&n);
  if(n%2!=0){
  	n--;
  }
  for(i=n;i>=n-4;i-=2){
  	if(i%2==0&&i>0){
  		sum+=i;
	  }
  }  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
//  c=sum-a;
//  printf("%d",c);
  printf("%d",sum);  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int Prime(int n){
	int i; 
	if (n<2) return 0;
	for (i=2;i<=sqrt(n);i++)
	if (n%i==0) return 0;
return 1; }

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
   int n;
   scanf("%d",&n);
	int c=0;
  	int i = n;
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	if(Prime(n)==1){
  		while(c!=3){
  			i++;
  			if(Prime(i)==1){
  				printf("%d ",i);
  				c++;
			  }
		  }
	  }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

